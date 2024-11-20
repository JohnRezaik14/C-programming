#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,col,result;
    printf("enter row");
    scanf("%d", &row);
       printf("enter col");
    scanf("%d", &col);
   result= (row+col)/2;
   printf("the result is %d",result);
    return 0;
}
