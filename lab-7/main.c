#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    FILE *fptr1;
    int arrTxt[5] = {5, 8, 10, 20, -10};
    int arrTxtRead[5];
    int arrDat[5] = {-3, 290, 50, 3, -5};
    int arrDatRead[5];
    fptr = fopen("E:\\ITI\\Open Source - Alex\\C Programming\\C-lab\\lab-7\\file_ptr.txt", "w");
    if (fptr)
    {
        printf("File.txt created successfully\n");
        printf("writing on file.txt\n");
        for (int i = 0; i < 5; i++)
        {
            fprintf(fptr, "%d\n", arrTxt[i]);
        }

        fclose(fptr);
        printf("fptr is closed\n");
    }
    fptr = fopen("E:\\ITI\\Open Source - Alex\\C Programming\\C-lab\\lab-7\\file_ptr.txt", "r");
    if (fptr)
    {
        printf("reading/scanning from file.txt\n");
        for (int i = 0; i < 5; i++)
        {
            fscanf(fptr, "%d\n", &arrTxtRead[i]);
        }
        fclose(fptr);
        printf("fptr is closed\n");
    }
    printf("check on reading from text\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arrTxtRead[i]);
    }

    // implemnting file function on binary file

    fptr1 = fopen("E:\\ITI\\Open Source - Alex\\C Programming\\C-lab\\lab-7\\file_ptr.dat", "wb");

    if (fptr1)
    {
        printf("File.dat created successfully\n");
        printf("writing on file.dat\n");
        for (int i = 0; i < 5; i++)
        {
            fwrite(&arrDat[i], sizeof(int), 1, fptr1);
            // fseek(fptr1, sizeof(int), SEEK_CUR);
        }

        fclose(fptr1);
        printf("fptr is closed\n");
    }
    fptr1 = fopen("E:\\ITI\\Open Source - Alex\\C Programming\\C-lab\\lab-7\\file_ptr.dat", "rb");
    if (fptr1)
    {
        printf("reading/scanning from file.dat\n");
        for (int i = 0; i < 5; i++)
        {
            fread(&arrDatRead[i], sizeof(int), 1, fptr1);
            // fseek(fptr1, sizeof(int), SEEK_CUR);
        }
        fclose(fptr1);
        printf("fptr is closed\n");
    }
    printf("check on reading from binary\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arrDatRead[i]);
    }
    return 0;
}
