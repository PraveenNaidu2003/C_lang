/*to calculate smallest and largest number
Author Ch Ravi Kumar Satya Sai Praveen
Date :20 Feb 2022*/
#include <stdio.h>
int main()
{
    int i62,j62,r1_62,r2_62,c1_62,c2_62;
    printf("how many rows do you want in first matrix:");
    scanf("%d",&r1_62);
    printf("how many colums do you want in first matrix:");
    scanf("%d",&c1_62);
    printf("how many rows do you want in second matrix:");
    scanf("%d",&r2_62);
    printf("how many colums do you want in second matrix:");
    scanf("%d",&c2_62);
    int elm1_62[r1_62][c1_62],elm2_62[r2_62][c2_62];
    for(i62=0; i62<r1_62; i62++)
    {
        for(j62=0; j62<c1_62; j62++)
        {
            printf("enter %d row %d column element of first matrix:",i62+1,j62+1);
            scanf("%d",&elm1_62[i62][j62]);
        }
    }
    printf("ENTER DETAILS OF SECOND MATRIX\n");
    for(i62=0; i62<r2_62; i62++)
    {
        for(j62=0; j62<c2_62; j62++)
        {
            printf("enter %d row %d column element of second matrix:",i62+1,j62+1);
            scanf("%d",&elm2_62[i62][j62]);
        }
    }
    int lr62,lc62,sr62,sc62;
    if(r1_62>=r2_62)
    {   lr62=r1_62;
        sr62=r2_62;
    }
    else
    {   lr62=r2_62;
        sr62=r1_62;
    }
    if(c1_62>=c2_62)
    {   lc62=c1_62;
        sc62=c2_62;
    }
    else
    {   lc62=c2_62;
        sc62=c1_62;
    }
printf("high rows is %d high colums is %d\n",lr62,lc62);
int elm_62[lr62][lc62];
for(i62=0; i62<sr62; i62++)
{
    for(j62=0; j62<sc62; j62++)
        elm_62[i62][j62]=elm1_62[i62][j62]+elm2_62[i62][j62];
}
for(i62=0; i62<lr62; i62++)
{
    for(j62=sc62; j62<lc62; j62++)
    {
        if(c1_62>=c2_62)
            elm_62[i62][j62]=elm1_62[i62][j62];
        else
            elm_62[i62][j62]=elm2_62[i62][j62];
    }
}
for(i62=sr62; i62<lr62; i62++)
{
    for(j62=0; j62<lc62; j62++)
    {
        if(r1_62>=r2_62)
            elm_62[i62][j62]=elm1_62[i62][j62];
        else
            elm_62[i62][j62]=elm2_62[i62][j62];
    }
}
elm_62[lr62-1][lc62-1]=0;
for(i62=0; i62<lr62; i62++)
{
    for(j62=0; j62<lc62; j62++)
        printf("%d\t",elm_62[i62][j62]);
    printf("\n");
}
return 0;
}