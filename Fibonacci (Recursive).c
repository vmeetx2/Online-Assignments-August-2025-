#include <stdio.h>

int FIBO(int n)
{
    if(n==0)return 0;
    if(n==1)return 1;
    return FIBO(n-1)+FIBO(n-2);
}

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)printf("%d ",FIBO(i));
}
