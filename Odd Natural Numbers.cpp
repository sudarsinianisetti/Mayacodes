#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
        i++;
    }
}
