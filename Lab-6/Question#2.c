#include <stdio.h>
int main()
{
    int number, sum = 0;
    printf("Enter a five digit number: ");
    scanf("%d", &number);
    int temp = number;   
    int n = number;
    while (n > 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    if (sum % 2 == 0)
    {
        int prime = 1; 
        if (sum < 2)
        {
            prime = 0;
        }
        else
        {
            for (int i = 2; i <= sum / 2; i++)
            {
                if (sum % i == 0)
                {
                    prime = 0;
                    break;
                }
            }
        }
        if (prime){
            printf("Even sum %d and it is Prime\n", sum);}
        else{
            printf("Even sum %d but it is Not Prime\n", sum);}
    }
    else
    {
        int original = temp, reversed = 0, remainder;
        while (temp > 0)
        {
            remainder = temp % 10;
            reversed = reversed * 10 + remainder;
            temp /= 10;
        }
        if (original == reversed){
            printf("Odd sum %d and number %d is Palindrome\n", sum, sum);}
        else{
            printf("Odd sum %d and number %d is Not Palindrome\n", sum, sum);}
    }
    return 0;
}
