#include <stdio.h>
#include <stdlib.h>
void sum();
int main()
{

    char choice;
    do
    {
        sum();
        scanf(" %c", &choice);
        system("cls");
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
void sum()
{
    int sum, x, y;
    printf("Please enter first number for summation\n");
    scanf("%d", &x);
    printf("Please enter second number for summation\n");
    scanf("%d", &y);
    sum = x + y;
    printf("the sum of %d + %d = %d\n", x, y, sum);
    printf("Do you want to perform another summation? (y/n): ");
}