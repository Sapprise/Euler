/*************************************************************************
	> File Name: 64.c
	> Author: 
	> Mail: 
	> Created Time: 2019年10月01日 星期二 21时13分52秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define RED 0
#define BLACK 1
#define TWO_BLACK 2

typedef struct Node {
    int key, color;
    struct Node *lc, *rc;
} Node;

Node _NIL, * const NIL = &_NIL;

__attribute__((constructor))
void init_NIL() {
    NIL->key = 0;
    NIL->color = BLACK;
    NIL->lc = NIL->rc = NIL;
    return ;
}

Node *getNewNode(int key) {
    Node *p = (Node *)malloc(sizeof(Node));
    p->key = key;
    p->color = RED;
    p->lc = p->rc = NIL;
    return p;
}

int hasRedChild(Node *root) {
    return root->lc->color == RED || root->rc->color == RED;
}

Node *left_rotate(Node *root) {
    Node *p = root->rc;
    root->rc = p->lc;
    p->lc = root;
    return p;
}

Node *right_rotate(Node *root) {
    Node *p = root->lc;
    root->lc = p->rc;
    p->rc = root;
    return p;
}

Node *insert_maintain(Node *root) {
    if (!hasRedChild(root)) return root;
    if (root->lc->color == RED && root->rc->color == RED) {
        if (!hasRedChild(root->lc) && !hasRedChild(root->rc)) return root;
        root->lc->color = root->rc->color = BLACK;
        root->color = RED;
        return root;
    }
    if (root->lc->color == RED) {
        if (!hasRedChild(root->lc)) return root;
        if (root->lc->rc->color == RED) {
            root->lc = left_rotate(root->lc);
        }
        root = right_rotate(root);
    } else {
        if (!hasRedChild(root->rc)) return root;
        if (root->rc->lc->color == RED) {
            root->rc = right_rotate(root->rc);
        }
        root = left_rotate(root);
    }
    root->color = RED;
    root->lc->color = root->rc->color = BLACK;
    return root;
}

Node *__insert(Node *root, int key) {
    if (root == NIL) return getNewNode(key);
    if (root->key == key) return root;
    if (root->key < key) root->rc = __insert(root->rc, key);
    else root->lc = __insert(root->lc, key);
    return insert_maintain(root);
}

Node *insert(Node *root, int key) {
    root = __insert(root, key);
    root->color = BLACK;
    return root;
}

Node *predeccessor(Node *root) {
    Node *p = root->lc;
    while (p->rc != NIL) p = p->rc;
    return p;
}

Node *erase__maintain(Node *root) {
    if (root->lc->color != TWO_BLACK && root->rc->color != TWO_BLACK) return root;
    if (root->lc->color == TWO_BLACK) {
        if (root->rc->color == RED) {
            root->color = RED;
            root->rc->color = BLACK;
            root = left_rotate(root);
            root->lc = erase__maintain(root->lc);
            return root;
        }
        if (!hasRedChild(root->rc)) {
            root->color += 1;
            root->rc->color -= 1;
            root->lc->color -= 1;
            return root;
        }
        if (root->rc->rc->color != RED) {
            root->rc->lc->color = BLACK;
            root->rc->color = RED;
            root->rc = right_rotate(root->rc);
        }
        root->rc->color = root->color;
        root->lc->color -= 1;
        root = left_rotate(root);
        root->lc->color =  root->rc->color = BLACK;
    } else {
        if (root->lc->color == RED) {
            root->color = RED;
            root->lc->color = BLACK;
            root = right_rotate(root);
            root->rc = erase__maintain(root->rc);
            return root;
        }
        if (!hasRedChild(root->lc)) {
            root->color += 1;
            root->rc->color -= 1;
            root->lc->color -= 1;
            return root;
        }
        if (root->lc->lc->color != RED) {
            root->lc->rc->color = BLACK;
            root->lc->color = RED;
            root->lc = left_rotate(root->lc);
        }
        root->lc->color = root->color;
        root->rc->color -= 1;
        root = right_rotate(root);
        root->lc->color =  root->rc->color = BLACK;
    }
    return root;
}

Node *__erase(Node *root, int key) {
    if (root == NIL) return root;
    if (root->key < key) {
        root->rc = __erase(root->rc, key);
    } else if (root->key > key){
        root->lc = __erase(root->lc, key);
    } else {
        if (root->lc == NIL || root->rc == NIL) {
            Node *p = root->lc == NIL ? root->rc : root->lc;
            p->color += root->color;
            free(root);
            return p;
        } else {
            Node *p = predeccessor(root);
            root->key = p->key;
            root->lc = __erase(root->lc, p->key);
        }
    }
    return erase__maintain(root);
}

Node *erase(Node *root, int key) {
    root = __erase(root, key);
    root->color = BLACK;
    return root;
}

void output(Node *root) {
    if (root == NIL) return;
    output(root->lc);
    printf("%d %d %d %d\n", root->key, root->color, root->lc->key, root->rc->key);
    output(root->rc);
    return ;
}

int main() {
    int x, y;
    Node *root = NIL;
    while(~scanf("%d %d", &x, &y)) {
        switch(x) {
            case 1: root = insert(root, y); break;
            case 2: root = erase(root, y); break;
            case 3: output(root);
        }
    }
    return 0;
}
