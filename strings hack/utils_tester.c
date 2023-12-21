
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string_utils.h"
    int main()
{
    // Test case
    char inputString[] = "Hello, World!";
    char oldChar = 'l';
    char newChar = 'z';

    char expectedResult[] = "Hezzo, Worzd!";

    replaceChar(inputString, oldChar, newChar);

    if (areStringsEqual(inputString, expectedResult))
    {
        printf("Test Passed! Result: %s\n", inputString);
    }
    else
    {
        printf("Test Failed! Result: %s\n", inputString);
    }

    


  char inputString1 [100] = "Hello, World!";
 oldChar = 'l';
 newChar = 'z';

  char expectedResult1[100] = "Hezzo, Worzd!";

char *result = replaceCharCopy(inputString1, oldChar, newChar);

if (areStringsEqual(result, expectedResult1) )
{
    printf("Test Passed! Result: %s\n", result);
}
else
{
    printf("Test Failed! Result: %s\n", result);
}









   char inputString2[100] = "Hello, World!";
    char charToRemove = 'l';

   
      char expectedResult3[100] = "Heo, Word!";

   
    removeChar(inputString2, charToRemove);

    
    if (areStringsEqual(inputString2, expectedResult3)) {
        printf("Test Passed! Result: %s\n", inputString2);
    } else {
        printf("Test Failed! Result: %s\n", inputString2);
    }










      char inputString5[100] = "Hello, World!";
     charToRemove = 'l';

    
      char expectedResult4[100] = "Heo, Word!";

   
     result = removeCharCopy(inputString5, charToRemove);

   
    if (areStringsEqual(result, expectedResult)) {
        printf("Test Passed! Result: %s\n", result);
    } else {
        printf("Test Failed! Result: %s\n", result);
    }



return 0;
}