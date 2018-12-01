#include <stdio.h>
#include <stdlib.h>
void main()
{
    char a[100];
    printf("Enter the sentence \n");
    gets(a);
    int l=strlen(a);
    int c[26];
    for(int i=0;i<26;i++)
    {
        c[i]=0;
    }
    for(char i='A';i<='Z';i++)
    {
        for(int j=0;j<l;j++)
        {
            if(a[j]==i)
            {
                c[i-'A']++;
            }
        }
    }
    int max=c[0];
    for(int i=0;i<26;i++)
    {
        max=(max<c[i])?c[i]:max;
    }
    for(int i=1;i<=max;i++)
    {
        for(int j=0;j<26;j++)
        {
            if(c[j]==(max-i+1))
            {
                printf("*");
                c[j]--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(char q='A';q<='Z';q++)
    {
        printf("%c",q);
    }
}
