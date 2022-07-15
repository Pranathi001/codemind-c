#include<stdio.h>
int main()
{
    int a0,b0,a1,b1,a2,b2,pa=0,pb=0;
    scanf("%d%d%d",&a0,&a1,&a2);
    scanf("%d%d%d",&b0,&b1,&b2);
    if(a0>b0)
    {
        pa++;
    }
    else if(a0<b0)
    {
        pb++;
    }
    if(a1>b1)
    {
        pa++;
    }
    else if(a1<b1)
    {
        pb++;
    }
    if(a2>b2)
    {
        pa++;
    }
    else if(a2<b2)
    {
        pb++;
    }
    printf("%d %d",pa,pb);
}