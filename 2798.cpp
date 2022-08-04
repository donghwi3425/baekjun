#include <stdio.h>


void BlackJack(int N, int M) {
    int sum, max = 0;
    int num[100] = {0,};

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            for (int k = j+1; k < N; k++)
            {
                sum = num[i] + num[j] + num[k];
                if(sum > max && sum <= M) max = sum;
            }
            
        }
        
    }
    printf("%d", max);
    
    
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    BlackJack(N,M);
}