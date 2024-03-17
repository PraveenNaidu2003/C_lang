#include <stdio.h>
#include <string.h>
int check(char name[],char num)
{
    int i,che;
    che=num/2;
	    char fir[che],last[che];
        fir[che]="";
        last[che]="";
        strcat(fir,name[i]);
        printf("%s",fir);
}
int main(void) {
	int test,i;
	printf("Enter the number of time we test");
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
	    int num;
	    scanf("%d",&num);
	    char name[num];
	    scanf("%s",name);
	    check(name,num);
	}
	return 0;
}