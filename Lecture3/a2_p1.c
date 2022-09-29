/*
    CH-230-A
    a2_p1.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    double first_double;
    double second_double;
    int first_int;
    int second_int;
    char char_one;
    char char_two;

    scanf("%lf", &first_double);
    scanf("%lf", &second_double);
    scanf("%d", &first_int);
    scanf("%d", &second_int);

    getchar();
    scanf("%c", &char_one);

    getchar();
    scanf("%c", &char_two);

    int char_sum = (int)char_one + (int)char_two;
    int char_product = (int)char_one * (int)char_two;

    printf("sum of doubles=%lf\n", first_double + second_double);
    printf("difference of doubles=%lf\n", first_double - second_double);
    printf("square=%lf\n", first_double * first_double);
    printf("sum of integers=%d\n", first_int + second_int);
    printf("product of integers=%d\n", first_int * second_int);
    printf("sum of chars=%d\n", char_sum);
    printf("product of chars=%d\n", char_product);
    printf("sum of chars=%c\n", (char)char_sum);
    printf("product of chars=%c\n", (char)char_product);
    return 0;
}