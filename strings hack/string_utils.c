#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void replaceChar(char *s, char oldChar, char newChar)
{
    while (*s != '\0')
    {
        if (s = oldChar)
        {
            *s = newChar;
        }
        s++;
    }
}



char * replaceCharCopy(const char *s, char oldChar, char newChar)
{
int lenght=strlen(s);
char *s1=(char *)malloc(lenght +1);
for (int i = 1; i < lenght; i++,s++)
{
    if (s==oldChar)
    {
        s1[i]=newChar;
    }
    
    s1[i]=s;
}


s1[lenght+1]='\0';


}



void removeChar(char *s, char c)
{
int lenght=strlen[s];
while(s[i]!='\0')
{
if (s[i]==c)
{
   s[i] =s[i+1]
}


    i++;
}











}
