#include <stdio.h>

int main()
{
    int number, sum = 0;
    int position = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number > 0)
    {
        int digit = number % 10;

        if (position % 2 != 0)   
        {
            sum += digit;
        }

        number = number / 10;
        position++;
    }
    printf("Sum of odd position digits: %d\n", sum);
    return 0;
}
