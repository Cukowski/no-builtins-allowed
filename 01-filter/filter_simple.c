#include <stdio.h>

int is_adult(int age) 
{
    return age >= 18;
}

int is_even(int number)
{
    return number % 2 == 0;
}

int filter(const int input[], int length, int output[], int (*predicate)(int))
{
    size_t count = 0;

    for (size_t i =0; i < length; i++)
    {
        if (predicate(input[i]))
        {
            output[count++] = input[i];
        }
    }
    return count;
}

void print_array(const int array[], size_t length)
{
    printf("[");
    for (size_t i = 0; i < length; i++)
    {
        printf("%d", array[i]);
        if (i + 1 < length)
        {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() 
{
    int ages[] = {12, 19, 25, 16, 31};
    size_t length = sizeof(ages) / sizeof(ages[0]);

    int result[length];

    // filter adults
    size_t count = filter(ages, length, result, is_adult);
    printf("Adults: ");
    print_array(result, count);

    // filter even numbers
    count = filter(ages, length, result, is_even);
    printf("Even numbers: ");
    print_array(result, count);

    return 0;
}
/**
// Simple: 
int main() 
{
    int ages[] = {12, 19, 25, 16, 31};
    int length = sizeof(ages) / sizeof(ages[0]);

    int adults[length];
    int count = 0;

    for (int i = 0; i < length; i++)
    {
        if (ages[i] >= 18) 
        {
            adults[count] = ages[i];
            count++;
        }
    }

    printf("Adults: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", adults[i]);
    }
    printf("\n");

    return 0;
}
    
*/