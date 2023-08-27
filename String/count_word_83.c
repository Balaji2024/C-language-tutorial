#include <stdio.h>
#include <string.h>
#include<stdlib.h>
 
int main()
{
    char s[200];
    int w=0, i=0;
 
    printf("Enter the string:\n");
    gets(s);
    for (i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' '&&s[i]!='\t')
		{
			w++;   
			while(s[i]!=' '&&s[i]!='\t')
			i++;
		}
             
         printf("Number of words in given string are: %d\n",w);   
    }
    
    return 0;
}
