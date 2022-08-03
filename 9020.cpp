#include <stdio.h>

int main() {
    int n, arr[10001] = {0, };
    arr[1] = 1;
    int num;

    for (int i = 2; i < 10001; i++)
    {
        for (int j = 2; j * i <= 10001 ; j++)
        {
            arr[i*j] = 1;
        }
        
    }
    
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &num);
        int check = num/2;
        for (int i = check; i > 0; i--)
        {
            if(arr[i] != 1  && arr[num-i] != 1) {
                printf("%d %d\n", i, num-i);
                break;
            }
        }
        
    }
    
    return 0;
}