#include<stdio.h>
int main()
{
    char s[100],i,su=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            su+=(s[i]-'0');
        }
    }
    printf("%d",su);
}