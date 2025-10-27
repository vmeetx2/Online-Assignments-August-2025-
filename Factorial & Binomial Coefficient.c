#include <stdio.h>

long long FACT_recursive(int n)
{
    if(n==0) return 1;
    return n*FACT_recursive(n-1);
}

long long FACT_iterative(int n)
{
    long long f=1;
    for(int i=1;i<=n;i++) f*=i;
    return f;
}

long long Binomial(int n,int r)
{
    return FACT_iterative(n)/(FACT_iterative(r)*FACT_iterative(n-r));
}

int main()
{
    int n,r;
    printf("n r Recursive_Factorial Iterative_Factorial Binomial\n");
    for(n=0;n<=5;n++){
        for(r=0;r<=n;r++){
            printf("%d %d %lld %lld %lld\n",n,r,FACT_recursive(n),FACT_iterative(n),Binomial(n,r));
        }
    }
}
