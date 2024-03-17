//Binary Search Programe
#include<stdio.h>
void swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main()
{
    int num=23,i,j;
    /*printf("Enter how many numbers you want to enter:");
    scanf("%d",&num);*/
    int arr[]={1,58,49,5,6,49,42,6,9,12,37,31,36,29,31,30,22,21,18,15,22,15,27};
    /*for(i=0;i<num;i++)
    {
        printf("Enter the %dth number:",i+1);
        scanf("%d",&arr[i]);
    }*/
    for(i=0;i<num-1;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(arr[i]>arr[j]) swap(&arr[i],&arr[j]);
        }
    }
    for(i=0;i<num;i++)printf("The %d Position Number is %d\n",i+1,arr[i]);
    int mid,cmp,k;
    printf("\nEnter the number that you want to check:");
    scanf("%d",&cmp);
    mid=(num-1)/2;
    if(arr[mid]==cmp)
    {
        for(i=mid;i>=0;i--)
        {
            if(arr[i]!=cmp) break;
        }
        printf("We Got that Number at %d position",i+2);
    }
    /*else if(arr[mid]>cmp)
    {
        for(i=0;i<mid;i++)
        {
            mid/=2;
            if(arr[mid]==cmp)
            {
                for(j=mid;j>=0;j--)
                {
                    if(arr[j]!=cmp)break;
                }
                printf("We Got that elemant at %d position",j+2);
                break;
            }    
            else if(arr[mid]>cmp) 
            {
                for(j=0;j<mid;j++)
                {
                    if(arr[j]==cmp)
                    {
                        for(k=j;j<=0;j++)
                        {
                            if(arr[k]!=cmp)break;
                        }
                        printf("We Got the element at %d position",k+2);
                        break;
                    }

                }
                printf("We Got the element at %d position",j+2);
                break;
            }
            else
            {
                for(j=mid;j>num;j++)
                {
                    if(arr[j]==cmp)
                    {
                        for(k=j;j<=0;j++)
                        {
                            if(arr[k]!=cmp)break;
                        }
                        printf("We Got the element at %d position",k+2);
                        break;                        
                    }   
                }
                printf("We Got the element at %d position",j+2);
                break;
            }       
        }

    }
    else if(arr[mid]<cmp)
    {
        for(i=mid;i<num;i++)
        {
            mid/=2;
            if(arr[mid]==cmp)
            {
                for(j=mid;j>=0;j--)
                {
                    if(arr[j]!=cmp)break;
                }
                printf("We Got that elemant at %d position",j+2);
                break;
            }    
            else if(arr[mid]>cmp) 
            {
                for(j=0;j<mid;j++)
                {
                    if(arr[j]==cmp)
                    {
                        for(k=j;j<=0;j++)
                        {
                            if(arr[k]!=cmp)break;
                        }
                        printf("We Got the element at %d position",k+2);
                        break;
                    }

                }
                printf("We Got the element at %d position",j+2);
                break;
            }
            else
            {
                for(j=mid;j>num;j++)
                {
                    if(arr[j]==cmp)
                    {
                        for(k=j;j<=0;j++)
                        {
                            if(arr[k]!=cmp)break;
                        }
                        printf("We Got the element at %d position",k+2);
                        break;                        
                    }   
                }
                printf("We Got the element at %d position",j+2);
                break;
            }       
        }

    }*/
    return 0;
}