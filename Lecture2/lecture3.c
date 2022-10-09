#include <stdio.h>

int main()
{
    char name[100];
    // filesystem get string ( the line, the size of the line, and what the file is)

    fgets(name, sizeof(name), stdin);
    printf("You entered: %s", name);
    return 0;
}