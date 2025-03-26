#include<stdio.h>
#include<math.h>

int main()
{

    int n;
    int k;

    int i=0;
    int n_10=0;

    printf("podaj liczbe w systemie trojkowym: ");
    scanf("%d", &n);
    while (n>0)
    {
        k=n%10;
        n/=10;
        n_10+=pow(3, i)*k;
        i++;
    }
    printf("%d", n_10);
}