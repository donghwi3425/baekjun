#include <stdio.h>

int Hanoi(int n, int from, int mid, int to)
{
    if (n==1){
        printf("%d %d", from, to);
        return;
    }
    Hanoi(n-1, from, to, mid);
    printf("%d %d\n",from, to);
    Hanoi(n-1, mid, from, to);

}

void main{
    Hanoi(3, 1, 2, 3);
}