/*

Task

You have to print the character, ch, in the first line. Then print s in next line. In the last line print the sentence, sen.
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch;
    char s[50];                             //largest word in english is 45 letters
    char sen[100];

    scanf("%c", &ch);
    scanf("%s", s);                         //no need of &operator and use %s
    
    getchar();                              //flush the newline from the input buffer
    scanf("%[^\n]", sen);                   //no need of &operator and use %[^\n]
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;

}


//learned String
//char and word and full sentence wrinting syntax;