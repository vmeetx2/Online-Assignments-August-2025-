#include <stdio.h>

int GCD(int a,int b)
{
    if(b==0)return a;
    return GCD(b,a%b);
}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("GCD=%d",GCD(x,y));
}
