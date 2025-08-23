#include <stdio.h>
#include <string.h>

int main()
{
    FILE *ptr;
    ptr = fopen("rohit.txt", "w");
    if (ptr == NULL)
    {
        printf("The file does not exist");
    }
        char ch[1000];

        printf("enter the sentences you want to add in the file = ");
        while (1)
        {

            fgets(ch, sizeof(ch), stdin);
            ch[strcspn(ch,"\n")] = '\0';

            if (strcmp(ch, "exit") == 0)
                break;

            fputs(ch, ptr);
        }
        printf("written succesfully");
        fclose(ptr);
    return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     FILE *ptr = fopen("rohit.txt", "w");
//     if (ptr == NULL)
//     {
//         printf("The file could not be opened.\n");
//         return 1;
//     }

//     char ch[1000]; // Increased size for big paragraph

//     printf("Enter paragraphs (type 'exit' to finish):\n");

//     while (1)
//     {
//         fgets(ch, sizeof(ch), stdin);
//         ch[strcspn(ch,"\n")] = '\0';

//         if (strcmp(ch, "exit") == 0)
//             break;

//         fputs(ch, ptr);
//     }

//     fclose(ptr);
//     printf("All paragraphs written successfully.\n");
//     return 0;
// }
