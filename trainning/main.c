#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int result,number,ten_Multiple,last_Moduled,last_Result,summition;
printf("Enter the number \n");
scanf("%d",&number);

ten_Multiple=10;

last_Moduled=last_Result=summition=result=0;


if (number>ten_Multiple){
   last_Result= (number%ten_Multiple);
   result+=last_Result;
}
    printf("the result is %d \n",result);
if(number>ten_Multiple*10){
     int calculated_Result=(((number%ten_Multiple)-last_Result)/(ten_Multiple/10));
  last_Result = calculated_Result;
    ten_Multiple*=10;
     printf("the last Result is %d \n",last_Result);

    result+=last_Result;

      printf("the result is %d \n",result);
}
while(number>ten_Multiple){
    last_Result= ((number%ten_Multiple)-
                  ((last_Result*10)+(result-last_Result)))
                  /ten_Multiple;
               ten_Multiple*=10;
    result+=last_Result;
    printf("the result is %d \n",result);
}
printf("the result is %d \n",result);

    return 0;
}
//    int number;
//   printf("enter number \n");
//   scanf("%d",&number);
//    int countTens = 0;
//  do {
//    number /= 10;
//    ++countTens;
//  } while (number >10);
//   printf("count is %d\n",countTens);
