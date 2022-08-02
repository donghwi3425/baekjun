#include <stdio.h>

int main() {
    int min, m, n, sum = 0;

	scanf("%d %d", &m, &n);
	
	for (int i = m ; i <= n; i++)
    {
        for (int j = 2; j <=i; j++)
        {
            if (j == i-1) sum += i; if(min = 0) min = i;
			if (i % j == 0) break;
        }
	if (i == 2) {
		sum+=i;
		min=i;
	}
	
    }
	if (min != 0) printf("%d\n%d", sum, min);
	else printf("-1");
    

    return 0;
    
}