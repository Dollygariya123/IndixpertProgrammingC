#include <stdio.h>
int main()
{
    int number1[5] = {1, 3, 4, 5, 3};
    int number2[3] = {4, 3, 2};
    int number[8];

    
    printf("number1: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", number1[i]);
    }
    printf("\nnumber2: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", number2[i]);
    }
    return 0;
}