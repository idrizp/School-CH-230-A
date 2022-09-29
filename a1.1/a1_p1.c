#include <stdio.h>
int main()
{
    /*
        Every  number in C is an int unless specified otherwise by attaching a decimal point.
        When you divide two integers, it will try to round down, and that's why
        when you divide 4 with 5, you're dividing two integers, which in turn
        will cause the result of 0.8 to round down to 0.

        If we divide 4 with 5.0, however, then we will have produced a floating point number,
        as the 5.0 is a floating point number. Dividing two floating point numbers or one integer
        with a floating point number gets you a floating point number in return.
    */
    double result;
    result = (3 + 1) / 5.0;
    printf("The value of 4/5 is %lf\n", result);
    return 0;
}