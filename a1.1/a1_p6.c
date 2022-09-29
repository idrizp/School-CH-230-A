/*
    CH-230-A
    a1_p6.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    char c = 'F';

    int thirdUnicode = (int)c + 3;
    char thirdCharacter = (char)thirdUnicode;

    printf("%c %d\n", thirdCharacter, thirdUnicode);
    return 0;
}