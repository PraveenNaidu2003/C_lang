#include <stdio.h>
struct emp
{
int sal;
char empid[15];
};
void swap(int *a,int *b);
int main()
{
int num,i,avg=0;
printf("ENTER NUMBER OF EMPLOYES:");
scanf("%d",&num);
struct emp emply[num];
for(i=0;i<num;i++){
printf("\nENTER EMPOLY %d EMPOLY ID:",i+1);
scanf("%s",emply[i].empid);
printf("\nENTER SALARY OF THE %dTH PERSON:",i+1);
scanf("%d",&emply[i].sal);
avg+=emply[i].sal;}
avg/=num;
for(i=0;i<num;i++)
{if(emply[i].sal<emply[i+1].sal) swap(&emply[i].sal,&emply[i+1].sal);
}
printf("\nThe Average Salary of all employees is: %d",avg);
printf("\nThe Largest Salary of all Empolyess is: %d",emply[0].sal);
int less=0;
for(i=0;i<num;i++)
{
if(emply[i].sal<1000) less++;
}
printf("\nFINALLY %d Empolyess are geting salary less than 10000",less);
return 0;
}
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}