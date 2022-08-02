#include <stdio.h>

int main() {
    int a;

    scanf("%d", &a);

    for (int i = 2; i <= a; i++)
    {
       if (a % i == 0) {
		   printf("%d\n" , i);
		   a /= i;
		   i =1;
	   }
        
    }
    
    return 0;
    
}