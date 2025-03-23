#include<stdio.h>

int leibnz(int n);

int leibnz(int n)
{
    if (n==1)
        return (-3);
    else
    {
        if (n%2==0)
            return (2+abs(leibnz(n-1)));
        else
            return (-(2+abs(leibnz(n-1))));
    }

}

int main(void);

int main(void)
{
    int n;
    double pi=1;
    printf("Podaj n ");
    scanf("%d", &n);
    //float lei[10000] = {};
    //for (int i = 1; i<=n; i++)
        //lei[i-1]=(1.0/leibnz(i));
    for (int i = 0; i<n; i++)
        pi=pi+(1.0/leibnz(i+1));
    pi=pi*4;
    printf("%f", pi);
    return 0;
}