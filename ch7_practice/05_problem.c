#include <stdio.h>
int main()
{
    int n,m;
    printf("enter how many multiplication table you want = ");
    scanf("%d",&n);
    printf("enter the limit of the table = ");
    scanf("%d",&m);
    int array[n][m];

    int mul[n] ;
    for(int i = 0;i<n;i++)
    {
        printf("enter %d number whose table you want = ",i+1);
        scanf("%d",&mul[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            array[i][j] = mul[i] *(j+1);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf(" the multuplication table %d  = %d\n", mul[i],array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
