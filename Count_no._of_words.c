#include<stdio.h>
int main()
{
    char s[100],i,c=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==' ')
        {
            c=c+1;
        }
    }
    printf("%d",c+1);
}