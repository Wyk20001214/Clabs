#include <stdio.h>
int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 100;
    step = 5;

    celsius = lower;
    printf("celsius\tfahr\n");
    while (celsius <= upper)
    {
        fahr = 9 * celsius / 5 + 32;
        printf("%d\t%d\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}
