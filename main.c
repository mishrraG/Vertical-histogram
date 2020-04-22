/**
This program is a representation of a Vertical Histogram
Author : Arpit Kumar Mishra
*/

#include <stdio.h>
#include <string.h>
void main()
{
    char a[100]="SANSKRITI Vijay";
    int l=strlen(a);
    int freq[26];       // array to store the frequency of each letter in the string a
    for(int i=0;i<26;i++)
    {
        freq[i]=0;
    }
    for(char i='A';i<='Z' ;i++)
    {
        for(int j=0;j<l;j++)
        {
            if(a[j]==i || a[j]==i+32)     //the frequency is stored for both uppercase and lowercase letters
            {
                freq[i-'A']++;
            }
        }
    }
    int max=freq[0];
    for(int i=0;i<26;i++)         // Calculates the maximum frequency in the frequency array as it will be required to
    {                             // y=triangulate the height of the histogram
        max=(max<freq[i])?freq[i]:max;
    }
    printf("The sentence in consideration is - %s\n",a);
    for(int i=1;i<=max;i++)       // Main loop responsible for printing the histogram the way it's printed
    {
        for(int j=0;j<26;j++)
        {
            if(freq[j]==(max-i+1))
            {
                printf("*");
                freq[j]--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    for(char q='A';q<='Z';q++)     // This is responsible for printing the x-axis i.e. the base of the histogram
    {
        printf("%c",q);
    }
    printf("\n");
    for(char q='a';q<='z';q++)     // This is responsible for printing the x-axis i.e. the base of the histogram
    {
        printf("%c",q);
    }
}
