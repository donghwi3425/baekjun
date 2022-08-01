# include <stdio.h>

int main () {
    int a, b, c, t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {   
        scanf("%d %d %d", &a, &b, &c);
        if (c%a == 0) printf("%d%02d\n",a,c/a);
        else printf("%d%02d\n", c%a, c/a + 1);
    }
    
}
