/*************************************************************************
	> File Name: 266.c
	> Author: 
	> Mail: 
	> Created Time: 2019年10月02日 星期三 09时08分26秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX_N 1000

char data[MAX_N + 5];
int top, t;
long long nums[MAX_N + 5];
int flag[MAX_N + 5];
char f[MAX_N + 5];

void counter(char s) {
    long long temp, a1, a2;
    switch(s) {
        case '+' : 
            temp = nums[--t] + nums[--t];
            nums[t++] = temp;
            break;
        case '*' :
            temp = nums[--t] * nums[--t];
            nums[t++] = temp;
            break;
        case '-' :
            a2 = nums[--t], a1 = nums[--t];
            temp = a1 - a2;
            nums[t++] = temp;
            break;
        case '/' :
            a2 = nums[--t], a1 = nums[--t];
            temp = a1 / a2;
            nums[t++] = temp;
            break;
        case '^' :
            a2 = nums[--t], a1 = nums[--t];
            temp = pow(a1, a2);
            nums[t++] = temp;
            break;
    }
}

int Isnumber(char s) {
    return s >= '0' && s <= '9';
}

int main() {
    int len, negt = 1, oneflag;
    long long ans = 0;
    flag[0] = -2;
    top = t = 1;
    scanf("%s", &data[0]);
    len = strlen(data);
    for (int i = 0; i < len; i++) {
        if (data[i] == '-' && (i == 0 || !Isnumber(data[i - 1]))) {
            negt = -1;
            continue;
        }
        if (Isnumber(data[i])) {
            ans = ans * 10 + (data[i] - '0') * negt;
            if (!Isnumber(data[i + 1]) || (i + 1) == len) {
                nums[t++] = ans;
                ans = 0;
                negt = 1;
            }
            continue;
        } else {
            if (data[i] == '(') {
                flag[top] = -1;
                f[top] = '(';
                top++;
                continue;
            }
            if (data[i] == ')') {
                top--;
                while(f[top] != '(') {
                    counter(f[top]);
                    top--;
                }
                continue;
            }
            if (data[i] == '+' || data[i] == '-') {
                oneflag = 0;
            }
            if (data[i] == '*' || data[i] == '/') {
                oneflag = 1;
            }
            if (data[i] == '^') {
                oneflag = 2;
            }
            while(oneflag <= flag[top - 1]) {
                top--;
                counter(f[top]);
            }
            f[top] = data[i];
            flag[top++] = oneflag;
        }
    }
    while (top > 1) {
        counter(f[--top]);           
    }
    printf("%lld\n", nums[1]);
    return 0;
}
