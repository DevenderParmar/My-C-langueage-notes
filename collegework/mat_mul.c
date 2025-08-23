#include <stdio.h>
int main()
{
    int m, n, p, q;
    printf("\nenter the number of rowes and column of first matrix = ");
    scanf("%d%d", &m, &n);
    printf("enter the number of rowes and column of second matrix = ");
    scanf("%d%d", &p, &q);
    if (n != p)
    {
        printf("Multiplication is not possible !!");
    }
    else
    {
        int mat1[m][n], mat2[p][q], mul[m][q];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("enter the element at index [%d %d] = ", i, j);
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("The first Matrix :\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d\t", mat1[i][j]);
            }
            printf("\n");
        }
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("enter the element at index [%d %d] = ", i, j);
                scanf("%d", &mat2[i][j]);
            }
        }
        printf("The Second Matrix :\n");
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d\t", mat2[i][j]);
            }
            printf("\n");
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                mul[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    mul[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
        printf("After Multiplication : \n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d\t", mul[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
