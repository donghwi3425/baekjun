# include <stdio.h>

int main () {
    int x;
    scanf("%d", &x);

    int n=1;
    while (1)
    {
        if((n-1)*n/2+1<=x && x<=n*(n+1)/2){
            break;
        }
        n++;
    }
 
    int numerator, denominator;
    if(n%2==0){ 
        numerator = x-(n-1)*n/2; 
        denominator = (n+1) - numerator; 
    }
    else{   
        denominator = x-(n-1)*n/2; 
        numerator = (n+1) - denominator; 
    }
    printf("%d/%d", numerator, denominator);
}
    