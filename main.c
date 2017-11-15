#include "Calculator.h"
#include <stdio.h>

int main()
{
    int a, b, sum;
    float sumdiv;
    // Input two integers with space between
    scanf("%d %d", &a, &b);

    sum = Addition(a, b);
    printf("Add: %d\n", sum);

    sum = Subtraction(a, b);
    printf("Sub: %d\n", sum);

    sum = Multiplication(a, b);
    printf("Mul: %d\n", sum);

    sumdiv = Division(a, b);
    printf("Div: %.2f\n", sumdiv);
    return 0;
}
