#include <stdio.h>
#include <math.h>
int main(){
    unsigned long number=0;
    unsigned long int i=0,num1,num2;
    printf("Enter two numbers:");
    scanf(" %d %d",&num1,&num2);
    int arr[num1+num2];
    for(i;i<num1;i++)arr[i]=0;
    for(i=num1;i<(num1+num2);i++)arr[i]=1;
    for(i=0;i<(num1+num2);i++)
    {
        number+=pow(2,i)*arr[i];
    }
    printf("%lld",number);
}
