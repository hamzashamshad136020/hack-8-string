#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replaceChar(char *s, char oldChar, char newChar)
{
    while (*s != '\0')
    {
        if (s ==oldChar)
        {
            *s = newChar;
        }
        s++;
    }
    
}

char *replaceCharCopy(const char *s, char oldChar, char newChar)
{
    int lenght = strlen(s);
    char *s1 = (char *)malloc(lenght + 1);
    for (int i = 1; i < lenght; i++, s++)
    {
        if (s == oldChar)
        {
            s1[i] = newChar;
        }

        s1[i] = s;
    }

    s1[lenght + 1] = '\0';

    return s1;
}

void removeChar(char *s, char c)
{
    int i=0;
    int lenght = strlen(s);
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            s[i] = s[i + 1];
        }

        i++;
    }
    return s;
}

char *removeCharCopy(const char *s, char c)
{
    int lenght = strlen(s);

    char *newcopy = (char *)malloc(lenght);

    for (int i = 0; i < lenght; i++)
    {
        if (*s != c)
        {
            *newcopy = *s;
            newcopy++;
            s++;
        }

        s++;
    }
    newcopy[lenght + 1] = '\0';
    return newcopy;
}

