#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //    float x1 ,x2,det;
    //    float a,b,c;
    //
    //    printf("Enter a\n");
    //    scanf("%f",&a);
    //     printf("Enter b\n");
    //    scanf("%f",&b);
    //     printf("Enter c\n");
    //    scanf("%f",&c);
    // det=(b*b)-(4*a*c);
    //    if(a==0)
    //        {
    //            printf("this is first degree equation(linear equation)\n");
    //        }
    //    else if(det<0)
    //        {
    //            printf("The routes are complex numbers\n");
    //        }
    //    else if(det==0){
    //    x1=((-b)+sqrt(det))/(2*a);
    //    printf("The routes are %f and %f\n",x1 , x1);
    //    }
    //    else{
    //            x1=((-b)+sqrt(det))/(2*a);
    //            x2=((-b)-sqrt(det))/(2*a);
    //    printf("The routes are %f and %f\n",x1 , x2);
    //
    //    }

    //------------------------------------------------------------------------------
    // int max,min,num1,num2,num3,num4,num5,num;

    // printf("Enter number 1\n");
    //     scanf("%d",&num1);
    //     max=min=num1;
    //    printf("Enter number 2\n");
    //     scanf("%d",&num2);
    //
    //     printf("Enter number 3\n");
    //     scanf("%d",&num3);
    //
    //     printf("Enter number 4\n");
    //     scanf("%d",&num4);
    //
    //     printf("Enter number 5\n");
    //     scanf("%d",&num5);

    //    if(num2>max){
    //        max=num2;
    //    }
    //    else if(num2<min){
    //        min=num2;
    //    }
    //
    //    if(num3>max){
    //        max=num3;
    //    }
    //    else if(num3<min){
    //        min=num3;
    //    }
    //
    //   if(num4>max){
    //        max=num4;
    //   }
    //    else if(num4<min){
    //        min=num4;
    //    }
    //       if(num5>max){
    //        max=num5;
    //       }
    //    else if(num5<min){
    //        min=num5;
    //    }

    //---------------------------------------------------------------------------
    int max, min, num;

    printf("Enter first number: ");
    scanf("%d", &num);

    max = min = num;

    for (int i = 2; i <= 5; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > max)
        {
            max = num;
        }
        else if (num < min)
        {
            min = num;
        }
    }

    printf("The maximum = %d and the minimum = %d\n", max, min);

    return 0;
}
