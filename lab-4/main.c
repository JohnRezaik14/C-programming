#include <stdio.h>
#include <stdlib.h>
void MinMax();
void students();
int main()
{
//   first min w max of arr of 5
//  second students function
    int choice;
    printf("1-Minimum and maximum of 5 numbers\n");
    printf("2-Students grade and the sum of them and average\n");
    printf("Enter your choice number:");
    scanf("%d",&choice);
    if (choice == 1)
    {

        MinMax();
    }
    else if(choice == 2)
    {

        students();
    }
    return 0;
}
void MinMax()
{
    int min,max,num[5],i;
    for(i=0; i<5; i++)
    {
        printf("enter the number %d : ",i+1);
        scanf("%d",&num[i]);
    }
    min=max=num[0];
    for (i=1; i<5; i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
        if(num[i]<min)
        {
            min=num[i];
        }
    };
    printf("the max is : %d \n",max);
    printf("the min is : %d \n",min);

}//end of minmax
void students()
{
    int grades[3][4],row,col;
    int sumOfStudent[3]= {0,0,0};
    int avgGrd[4]= {0,0,0,0};
    for(row=0; row<3; row++)//input grades
    {
        for(col=0; col<4; col++)
        {
            printf("enter the grade of student %d in subject %d : ",row+1,col+1);
            scanf("%d",&grades[row][col]);
            printf("\n");
        }//end of single row input

    }//end of input

    printf("printing grades\n\n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<4; col++)
        {
            printf("%d ",grades[row][col]);

        }
        printf("\n\n");
    }//end of printing grades

    for(row=0; row<3; row++)//calc sum of student grades
    {
        for(col=0; col<4; col++)
        {
            sumOfStudent[row]+=grades[row][col];

        }

    }//end of summition

    for(col=0; col<4; col++)//calc avg of subject
    {
        for(row=0; row<3; row++)
        {
            avgGrd[col]+=((grades[row][col])/3);

        }

    }//end of average

    for(row=0; row<3; row++)
    {
        for(col=0; col<4; col++)
        {
            printf("%d ",grades[row][col]);

        }
        printf(" %d\n",sumOfStudent[row]);
    }//end of printing sum,avg,grades

    for(col=0; col<4; col++)
    {
        printf("%d ",avgGrd[col]);
    }
    printf(" <==average");
};

