#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};
int compare(struct date d1, struct date d2)
{
    if (d1.year > d2.year)
        return 1;
    else if (d1.year < d2.year)
        return -1;
    else
    {
        if (d1.month > d2.month)
            return 1;
        else if (d1.month < d2.month)
            return -1;
        else
        {
            if (d1.day > d2.day)
                return 1;
            else if (d1.day < d2.day)
                return -1;
            else
                return 0;
        }
    }
}

int main()
{
    struct date d1, d2;

    printf("enter the day of first date = ");
    scanf("%d", &d1.day);
    printf("enter the month of first date = ");
    scanf("%d", &d1.month);
    printf("enter the year of first date = ");
    scanf("%d", &d1.year);

    printf("enter the day of second date = ");
    scanf("%d", &d2.day);
    printf("enter the month of second date = ");
    scanf("%d", &d2.month);
    printf("enter the year of second date = ");
    scanf("%d", &d2.year);

    printf("%d", compare(d1, d2));

    return 0;
}
