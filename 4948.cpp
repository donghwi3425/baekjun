#include <stdio.h>

int main() {
    int n, arr[123456*2] = {0, };
    int cnt = 0;
    arr[1] = 1;

    for (int i = 2; i < 123456*2; i++)
    {
        for (int j = 2; j * i <= 123456*2 ; j++)
        {
            arr[i*j] = 1;
        }
        
    }
    
    while (1)
    {   
        cnt = 0;
        scanf("%d\n", &n);
        if (n == 0) break;
        for (int i = n+1; i <= n*2; i++) {
            if (arr[i] == 0) cnt++;
        }
        printf("%d\n", cnt);
    }
        
    return 0;
}
