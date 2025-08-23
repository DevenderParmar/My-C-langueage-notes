// WAP to give grades according to the obtained marks.
#include <stdio.h>
int main()
{
    int percentage;
    printf("enter your percentage = ");
    scanf("%d", &percentage);
    if (percentage >= 90)

        printf("Amazing percentage.\nGRADE = A ");

    else if (percentage >= 80)

        printf("Very Good Percentage.\nGRADE = B");

    else if (percentage >= 70)

        printf("Not Bad Percentage.\nGRADE = C");

    else if (percentage >= 60)

        printf("More Hardwork.\nGRADE = D");

    else if (percentage >= 50)

        printf("Not Good,\nGRADE = C");

    else
        printf("OR KAR BACKCHODI.\nFAILED");
    return 0;
}
