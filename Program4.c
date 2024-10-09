// Program that accepts the temperature in Centigrade and converts it into Fahreneit
#include <stdio.h>
int main()
{
    float celcius, fahreneit;
    printf("\nEnter the temperature in Centigrade:");
    scanf("%f",&celcius);
    fahreneit = ((9 * celcius)/5) + 32;
    printf("\nAfter Conversion:");
    printf("\nThe temperature in Fahreneit is %f",fahreneit);
    return 0;
}