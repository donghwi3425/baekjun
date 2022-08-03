#include <stdio.h>

int fib(int n) {
    if(n > 1) fib(n - 1) + fib(n - 2);
    else return n;
}

int main() {
    int n;
    scanf("%d",&n);

    printf("%d", fib(n));
}