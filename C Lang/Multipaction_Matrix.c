/*to calculate Multiplication of matrix
Author Ch Ravi Kumar Satya Sai Praveen
Date :20 Feb 2022*/
#include <stdio.h>
int main()
{
    int i62, j62, r1_62, r2_62, c1_62, c2_62, c62;
    printf("how many rows do you want in first matrix:");
    scanf("%d", &r1_62);
    printf("how many colums do you want in first matrix:");
    scanf("%d", &c1_62);
    printf("how many rows do you want in second matrix:");
    scanf("%d", &r2_62);
    printf("how many colums do you want in second matrix:");
    scanf("%d", &c2_62);
    int elm1_62[r1_62][c1_62], elm2_62[r2_62][c2_62];
    c62 = (c1_62 == r2_62) ? 2 : 1;
    switch (c62)
    {
    case 1:
        printf("not possible");
        break;
    case 2:
        for (i62 = 0; i62 < r1_62; i62++)
        {
            for (j62 = 0; j62 < c1_62; j62++)
            {
                printf("enter %d row %d column element of first matrix:", i62 + 1, j62 + 1);
                scanf("%d", &elm1_62[i62][j62]);
            }
        }
        printf("ENTER DETAILS OF SECOND MATRIX\n");
        for (i62 = 0; i62 < r2_62; i62++)
        {
            for (j62 = 0; j62 < c2_62; j62++)
            {
                printf("enter %d row %d column element of second matrix:", i62 + 1, j62 + 1);
                scanf("%d", &elm2_62[i62][j62]);
            }
        }
        int elm_62[r1_62][c2_62], k62;
        for (i62 = 0; i62 < r1_62; i62++)
        {
            for (j62 = 0; j62 < c2_62; j62++)
            {
                elm_62[i62][j62] = 0;
            }
        }
        for (k62 = 0; k62 < r1_62; k62++)
        {
            for (i62 = 0; i62 < c2_62; i62++)
            {
                for (j62 = 0; j62 < c1_62; j62++)
                {
                    elm_62[k62][i62] += elm1_62[k62][j62] * elm2_62[j62][i62];
                }
            }
        }
        for (i62 = 0; i62 < r1_62; i62++)
        {
            for (j62 = 0; j62 < c2_62; j62++)
                printf("%d\t", elm_62[i62][j62]);
            printf("\n");
        }
        break;
    }
    return 0;
}