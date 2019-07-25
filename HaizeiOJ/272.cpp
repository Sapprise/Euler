/*************************************************************************
	> File Name: 272.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年07月24日 星期三 09时51分02秒
 ************************************************************************/

#include <iostream>
#include <cmath>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

typedef struct ListNode {
    int num;
    long long data;
    struct ListNode *next;
} ListNode;

ListNode *init_listnode(int num, long long data) {
    ListNode *p = (ListNode *)malloc(sizeof(ListNode));
    p->data = data;
    p->num = num;
    p->next = NULL;
    return p;
}



int main() {
    


    return 0;
}
