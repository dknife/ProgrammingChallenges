#include <stdio.h>

// n/2 or 3n + 1
int half_Or_TriplePlusOne(int level, int n) {
    if(n<0) return 0;
    printf("[%d]", n);
    if(n==1) return level;

    if(n%2==0) n>>=1;
    else n=3*n+1;
    return half_Or_TriplePlusOne(level+1, n);
}

int main(int argc, char **argv) {
    
    int n;
    while(1) {
        printf("input a number: ");
        scanf("%d", &n);
        if(n<=0) return 0;
        int len = half_Or_TriplePlusOne(1, n);
        printf("\nlen = %d\n", len);
    }
}