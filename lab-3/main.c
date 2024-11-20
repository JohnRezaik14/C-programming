#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void MagicBox();
void calculator();
int checkExecution(int result);
void gotoxy(int x, int y);
int add(int num1,int num2);
int sub(int num1,int num2);
int division(int num1,int num2);
int multi(int num1,int num2);
void returnToMenu()
{
    char ch=0;
    printf("\n");
    printf("press enter to return main menu\n");
    ch=getch();
    if(ch==13)
    {
        main();
    }
};
int main()
{
//    int choice=0;
//    do
//    {
//        printf("Magic Box  : 1\n");
//        printf("calculator : 2\n");
//        printf("Exit       : 3\n");
//        scanf("%d",&choice);
//    }
//    while(choice!=1 && choice!=2 && choice!=3);
//
//    if (choice==1)
//    {
//        system("cls");
//        MagicBox();
//    }
//    else if(choice==2)
//    {
//        system("cls");
//        calculator();
//    }

        return 0;
}

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void MagicBox()
{
    int size;
//    lw ktbt string hifdl runnig printing net print
    do
    {
        printf("Enter odd number for the size of the magic box\n");
        scanf("%d", &size);
    }
    while((size % 2) != 1);

    system("cls");

    int area, row, col;
    area = (size * size);

    row = 2;
    col = ((size+1)/2)-1;
    gotoxy(col*4, row*2);
    printf("1");
    int i = 2;

    for (; i <= area; i++)
    {

        if (((i - 1) % size) == 0)
        {
            row++;
        }
        else
        {
            row--;
            col--;
        }

        if (row < 2)
        {
            row = size+1;
        }
        else if (row > size+1)
        {
            row = 2;
        }

        if (col < 0)
        {
            col = size-1;
        }
        else if (col > size-1)
        {
            col = 0;
        }

        gotoxy(col*4, row*2);
        printf("%d", i);
    }
    returnToMenu();

}

void calculator()
{
    system("cls");
    char ch;
    int x,y;

//down arrow is -32 80
//up arrow is -32 72
//ESC is 27
//Enter is 13
//Home -32 71
//End -32 79
//Page Up -32 73
//Page Dn -32 81
// / division 47
// * 42
// + 43
//  - 45
// % 37

    printf("+   Add\n");
    printf("-   Sub\n");
    printf("*   Multi\n");
    printf("/   Div\n");
    printf("    Exit\n");

    x=8;
    y=0;
    gotoxy(x,y);
    ch = getch();
//    first time to read before entering while loop after that it will not excute that line
//    printf("ch -32 %d",ch);
//    the code run before recognize that i typed arrow
    while (ch != 27)
    {
        ch = getch();
        if(ch==(-32))
        {
            ch = getch();
            if(ch==80)
            {
                // go down
                y+=1;
                if (y > 4)
                {
                    y = 4;
                }
                gotoxy(x,y);
            }
            else if(ch==72)
            {
                // go up
                y-=1;
                if(y<0)
                {
                    y=0;
                }
                gotoxy(x,y);
            }
        }
        else if(ch==13)
        {
//                enter key
            int num1,num2;
            switch (y)
            {
            case 0:
                system("cls");
                printf("enter first number\n");
                scanf("%d",&num1);
                printf("enter second number\n");
                scanf("%d",&num2);
                printf("the sum is %d\n",add(num1,num2));
                printf("ESC to return to menu\n");
//                  break;
                      returnToMenu();
// how to break the while loop

////            case 1:
////                sub();
////                break;
////            case 2:
////                multiply();
////                break;
////            case 3:
////                division();
////                break;
////            case 4:
////                return;
////                break;
////            }
            }

        }

    }

    return;
//    h3ml return b int w int da bi3br 3n el choice ely ana m7tago w y3ml call ll function b rakmha
}




int add(int num1,int num2)
{
    int result;
    result=num1+num2;
    return result;
}
