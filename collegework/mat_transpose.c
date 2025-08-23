#include <stdio.h>
int main()
{
    // int m, n;
    // printf("enter the rows and culomn of the matrix = ");
    // scanf("%d%d", &m, &n);
    // int matrix[m][n], transpose[n][m];
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("Element [%d][%d] = ", i, j);
    //         scanf("%d",&matrix[i][j]);
    //     }
    // }
    // printf("the given matrix is :\n");
    // for(int i = 0;i<m;i++)
    // {
    //     for(int j = 0;j <n ;j++)
    //     {
    //         printf("%d ",matrix[i][j]);
    //     }
    //     printf("\n");
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         transpose[i][j]= matrix[j][i];
    //     }
    // }
    // printf("the tranpose of the matrix is :\n");
    // for(int i = 0;i<n;i++)
    // {
    //     for(int j = 0;j <m ;j++)
    //     {
    //         printf("%d ",transpose[i][j]);
    //     }
    //     printf("\n");
    // }
    // int num = 1;
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5-i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for(int k = 1;k <=2*i-1 ;k++)
    //     {
    //         printf("*");
    //     }
        
    //     // num++;
    //     printf("\n");
    // }
    // for (int i = 4; i >= 1; i--)
    // {
    //     for (int j = 1; j <= 5-i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for(int k = 1;k <=2*i-1 ;k++)
    //     {
    //         printf("*");
    //     }
        
    //     // num++;
    //     printf("\n");
    // }
    for(int  i= 5;i>= 1;i--)
    {
        for(int  j =1;j<=i;j++)
        {
            printf("%c",i+64);
        }
        printf("\n");
    }
    return 0;
}
