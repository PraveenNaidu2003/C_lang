// Write a program for evaluating a given postfix expression using stack.
#include<stdio.h>
#include <math.h>
#include <stdlib.h>
struct stack
{
    float val[10];
    int top;
};
struct stack exp;
void push(int a)
{
    exp.top++;
    exp.val[exp.top]=a;
}
int pop()
{
    int a=exp.val[exp.top];
    exp.top++;
    return a;
}
float chkdig(char c)
{
    if(c>="0"&&c<="9") return (float)c;
}
double find(char c,float a,float b)
{
    switch(c)
    {
        case '+':
        return (a+b);
        case '-':
        return (a-b)>=0?(a-b):(b-a);
        case '*':
        return a*b;
        case '/':
        return a/b;
        case '$':
        return (pow(a,b));
        default:printf("Neglite operation!..");
        exit(0);
    }
}
float evlut(char arr[])
{
    int i,val1,val2;
    char c;
    for(i=0;arr[i]!="\0";i++)
    {
        c=arr[i];
        if(chkdig(c)) push(c);
        else
        {
            val1=pop();
            val2=pop();
            val1=find(c,val1,val2);
            push(val1);
        }
    }
}
int main()
{
    exp.top=-1;
    char expr[20];
    printf("Enter Postfix expression:");
    scanf("%s",expr);
    printf("the original expression is:%s",expr);
    printf("the value after evaluting %f",evlut(expr));
}