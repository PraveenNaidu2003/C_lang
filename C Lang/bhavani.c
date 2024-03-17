#include <stdio.h>
#include "D:\Ravi Patice\coding\header\shiva.h"
#include "D:\Ravi Patice\coding\header\add.h"
int main()
{
    int a=32,b=64;
    printf("a is %d and b is %d",a,b);
    swap(&a,&b);
    printf("\na is %d and b is %d",a,b);
    printf("addtion is %d",add(a,b));
    return 0;
}