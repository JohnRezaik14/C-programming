#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>
//ENTER FIRST AND SECOND NAME IN 2 ARRAYS
//and full name in 3rd array
//save first then space then second name in third array

//function to compare two strings if they are identical

//replacemnt to scanf user can type any length of words limited by my own array length first letter is home
//last letter is end
//can move by cursor
//we read any key of user
//check on left and right keys
//check on Home and End
//on Enter and On Escape
//then check if the words is printable
//check first if normal or extended key
//and check if it's printable
//after enter make last character null character

//reverse the string

void gotoxy(int x, int y);
void scanfReplacementAndPrint();
void makeFullName();
void compareStrings();
void reverseString();
//void myScanf(type,destination);
int main()
{
    int choice;
    printf("Menu:\n1. Make Full Name\n2. Compare Strings\n3. Replacement scanf\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        makeFullName();
    }
    else if (choice == 2)
    {
        compareStrings();
    }
    else if (choice == 3)
    {
        scanfReplacementAndPrint();
    }

    return 0;
}


void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void makeFullName(){};

void scanfReplacementAndPrint()
{
    int x,y,count,size,i;
    size=20;
    char str[20]= {'0'};
    system("cls");
    count=x=0;
    gotoxy(x,0);
//ESC is 27
//Enter is 13

//bounce code
//backspace 8 remove the before character and make the character back John Jhn
//delete
//insert mode make me insert character in the word if eligable

    char ch;
    ch=1;

    while (ch!=27)
    {
        ch = getch();

        if (ch == 13)
        {
            printf("\n the string is:");

            printf("%s",str);

            printf("\n press ESC to excute");

        }
        else if (ch == -32) // Extended keys
        {
            //Home -32 71
            //End -32 79
            //right arrow -32 77
            //left arrow -32 75
            ch = getch();
            if(ch==71)//Home
            {
                gotoxy(0,0);
                x=0;
            }
            else if(ch==79)//End
            {
                x=count;
                gotoxy(x,0);

            }
            else if (ch==77)// right
            {
                if(x<=count && x<size-2)
                {
                    x++;
                    gotoxy(x,0);
                }

            }
            else if (ch==75 && (x>0))//left
            {
                x--;
                gotoxy(x,0);
            }
        }
        else
        {
            if(isprint(ch))
            {

                if(x<size-1)
                {
                    printf("%c", ch);
                    if(str[x]=='\0') //position is not changed before and is the last index
                    {
                        count++;
                    }
                    str[x]=ch;
                    //last should be incremented if we added more ch to str and not x=19(size-1)
                    //if we added and x>last
                    if(x<size-2)
                    {
                        x++;
                    }
                    gotoxy(x,0);

                }

                /*
                print ch
                str[0]=ch
                last=0
                X++,x=1
                */
            }
        }
    }


}




void compareStrings(){

char str1[100], str2[100],ch;
    printf("Enter the first string: ");
    for(int i=0; i< 100;i++){
            ch=getch();
            if(str1[i-1]==13){
                str1[i-1]='\0';
                printf("\n");
                break;
            }
            if(isprint(ch)){
                str1[i]=ch;
                printf("%c",ch);
            }

    }
//    scanf("%s", str1);
    printf("Enter the second string: ");
      for(int i=0; i< 100;i++){
              if(str2[i-1]==13){
                str2[i-1]='\0';
                printf("\n");
                break;
            }
        str2[i]=getche();
    }
//    scanf("%s", str2);
//for(int i=0;str[i] != '\0' || str2[i] != '\0';i++){
//
//}

    if (strcmp(str1, str2) == 0)
    {
        printf("The strings are identical.\n");
    }
    else
    {
        printf("The strings are different.\n");
        printf("Differences:\n");
        for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
        {
            if (str1[i] != str2[i])
            {
                printf("Position %d: '%c' (String 1) vs '%c' (String 2)\n",
                       i + 1,
                       str1[i] ? str1[i] : ' ',
                       str2[i] ? str2[i] : ' ');
            }
        }
    }
    printf("the length of str1 is : %d",strlen(str1));
}

void reverseString(){};
