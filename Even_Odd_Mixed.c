#include<stdio.h>
int main()
{
    int n,a,even,odd,c;
    scanf("%d",&n);
    c=0;
    even=0;
    odd=0;
    while(n>0)
    {
        a=n%10;
        n/=10;
        c++;
        if(a%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if(c==even)
    {
        printf("Even");
    }
    else if(c==odd)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}