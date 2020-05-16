
#include <stdio.h>
#include <math.h>

int main()
{
    float base, power, result;

    printf("Enter the base number: ");
    scanf("%f", &base);

    printf("Enter the power raised: ");
    scanf("%f",&power);

    result = pow(base,power);

    printf("%f^%f = %f", base, power, result);

    return 0;
}
