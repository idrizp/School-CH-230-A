/*
    CH-230-A
    a6_p1.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>

/*
We define a swap macro which takes in
a number x, y, and the type t.
f
We define a temporary variable of type t
called c, which we set to x.

Afterward, we set x to equal to y, and y to equal to c.
Essentially, we've swapped the variables.
*/
#define SWAP(x, y, t) \
    {                 \
        t c = x;      \
        x = y;        \
        y = c;        \
    }

int main()
{
    // Declare the integer types and scanf them
    int a;
    int b;

    scanf("%d", &a);
    scanf("%d", &b);

    // Declare the double types and scanf them
    double x;
    double y;

    scanf("%lf", &x);
    scanf("%lf", &y);

    // Call swap on the integers and the doubles
    SWAP(a, b, int);
    SWAP(x, y, double);

    // Print out the result
    printf("After swapping:\n");

    printf("%d\n", a);
    printf("%d\n", b);

    printf("%.6lf\n", x);
    printf("%.6lf\n", y);
    return 0;
}