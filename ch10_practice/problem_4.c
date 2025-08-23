// wap to read a text file character by character and write its content twice in a separate file.
#include <stdio.h>
int main()
{
    FILE *file1, *file2;
    char c; 
    
    file1 = fopen("rohitt.txt", "r");
    if (file1 == NULL)
    {
        printf("something went wrong");
    }



    file2 = fopen("Rohit.txt", "w");
    if (file2 == NULL)
    {
        printf("something went wrong");
        fclose(file1);
    }

    while ((c = fgetc(file1)) != EOF)
    {
        fputc(c,file2);
    }
    rewind(file1);
    
    while ((c = fgetc(file1)) != EOF)
    {
        fputc(c,file2);
    }
    
    printf("written succesfully");
    
    fclose(file1);
    fclose(file2);
    return 0;
}
