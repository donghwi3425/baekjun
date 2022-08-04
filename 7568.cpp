#include <stdio.h>


void Compare(int n) {
   
    int lev;
    int w[50] = {0,};
    int h[50] = {0,};
   for (int i = 0; i < n; i++)
   {
    scanf("%d %d",&w[i], &h[i]);
   }
   for (int i = 0; i < n; i++)
   {
    lev = 0;
    for (int j = 0; j < n; j++)
    {
        if (w[i] < w[j] && h[i] < h[j]) lev++;
    }
    printf("%d",lev + 1);
   }
   
   
    
    
}


int main() {
    int num;
    scanf("%d",&num);
    Compare(num);
}