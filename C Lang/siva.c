#include <stdio.h>
#ifndef _STDLIB_H
#pragma GCC system_header
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
#endif