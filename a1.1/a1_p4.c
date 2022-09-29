/*
    CH-230-A
    a1_p4.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    int x = 17;
    int y = 4;

    // declare variables and operations
    int sum = x + y;
    int product = x * y;
    int difference = x - y;
    float division = (float)x / y;
    int remainder = x % y;

    // print out the results
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    printf("sum=%d\n", sum);
    printf("product=%d\n", product);
    printf("difference=%d\n", difference);
    printf("division=%f\n", division);
    printf("remainder of division=%d\n", remainder);

    return 0;
}