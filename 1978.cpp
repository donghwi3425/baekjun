#include <stdio.h>

int main() {
    int num, a, cnt = 0;

    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &a);

        for (int j = 2; j <= a; j++)
        {
            if (a == j) cnt ++;
            if (a % j == 0) break;
        }
        
    }
    printf("%d", cnt);

    return 0;
    
}