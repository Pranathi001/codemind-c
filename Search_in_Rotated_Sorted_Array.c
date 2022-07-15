#include<stdio.h>
int main()
{
    int n,i,arr[1000],tv;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&tv);
    for(i=0;i<n;i++)
    {
        if(tv==arr[i])
        {
            printf("%d",i);
            break;
        }
    }
    if(tv!=arr[i])
    {
        printf("-1");
    }
}