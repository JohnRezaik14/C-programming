#include <stdio.h>
#include <stdlib.h>

struct student
{
    int id;
    char name[50];
    double grades[3];
};

struct student fillStudent();
void printStudent(struct student s);

int main()
{

    int choice,i;
    printf("choose the way to deal with struct student\n");
    printf("1.one student \n2.array of 3 \n3.dynamically size of students \n");
    scanf("%d",&choice);
    if(choice==1)
    {

        struct student s1;
        s1=fillStudent();
        printStudent(s1);
    }
    else if(choice==2)
    {
        struct student st[3];
        for(i=0; i<3; i++)
        {
            st[i]=fillStudent();
        }
        for(i=0; i<3; i++)
        {
//            printf("the student %s :\n",st[i].name);
            printStudent(st[i]);
        }
    }
    else if(choice==3)
    {
        int numOfStud;
        struct student *ptr;

        printf("enter the number of students you want to fill\n");
        scanf("%d",&numOfStud);
        ptr=(struct student*)malloc(numOfStud*(sizeof(struct student)));
        if(ptr){
             printf("memory allocation is done\n");
            
        for(i=0;i<numOfStud;i++){
            *(ptr+i)=fillStudent();
        }
             system("cls");
          for(i=0;i<numOfStud;i++){
            printStudent(*(ptr+1));
        }
        }


    }
    return 0;
}
struct student fillStudent()
{
    int i;
    struct student st;
    printf("Enter the id of student\n");
    scanf("%d",&st.id);
    printf("Enter the name of student\n");
    scanf("%s",st.name);
    for(i=0; i<3; i++)
    {
        printf("Enter the grade %d of student\n",i+1);
        scanf("%lf",&st.grades[i]);
    }
    system("cls");
    return st;

}
void printStudent(struct student st)
{
    int i;
    printf("The    id  of student is : %d\n",st.id);
    printf("The   name of student is : %s \n",st.name);
    for(i=0; i<3; i++)
    {
        printf("The grade %d is : %lf \n",i+1,st.grades[i]);
    }


}
