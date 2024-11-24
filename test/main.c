#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     int I = 0;
//     for (I++; I < 5;I=0 )
//     {
//         printf("%d", I);
//     }
//     return 0;
// }

int *GetMin(int ar[5]);
int main()
{
    int *ptr;
    int X[5] = {12, 18, -11, -20, 3};
    ptr = GetMin(X);
    printf("%d", *ptr);
    return 0;
}
int *GetMin(int ar[5])
{
    int min, I;
    min = ar[0];
    for (I = 1; I < 10; I++)
    {
        if (ar[I] < min)
        {
            min = ar[I];
        }
    }
    return &min;
}
