/*
    CH-230-A
    a6_p3.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/
#define MIN(a, b, c)                                                    \
    (a < b && a < c) ? a : ((b < a && b < c) ? b : (c < a && c < b) ? c \
                                                                    : -1)
#define MAX(a, b, c)                                                    \
    (a > b && a > c) ? a : ((b > a && b > c) ? b : (c > a && c > b) ? c \
                                                                    : -1)

#define MID_RANGE(a, b, c) (float)((MIN(a, b, c)) + (MAX(a, b, c))) / 2

#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    printf("The mid-range is: %.6f\n", MID_RANGE(a, b, c));
    return 0;
}