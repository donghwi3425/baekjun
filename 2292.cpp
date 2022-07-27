#include <stdio.h>
#include <string.h>

int main( ) {
    int n, x = 1 , cnt =1;
    scanf("%d", &n);

   while (1)
   {
    if (n-x <= 0 ) break;

    n-=x;

    x = cnt*6;

    cnt++;
   }
   printf("%d\n", cnt);
   
}