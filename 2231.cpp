#include <stdio.h>


void Decomposition(int n) {
    for (int i = n-54; i < n-1; i++)
    {
        int temp = i;
        int a = i;

        while (temp > 0)
        {
            a += temp%10;
            temp /= 10;
        }
        if (a == n) {
            printf("%d",i);
            n = 0;
            break;
        }
        
    }
    
    
}


int main() {
    int num;
    scanf("%d",&num);
    Decomposition(num);
}