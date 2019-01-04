#include <stdio.h>
#include <stdlib.h>
void bubblesort(int a[80],int num)
{
               int i,j;
               for(i=0;i<num-1;i++)
               {
                              for(j=0;j<num-i-1;j++)
                              {
                               if(a[j]>a[j+1])
                               {
                                              swap(&a[j],&a[j+1]);
                               }
                              }
               }
}
void swap(int *m,int *n)
{
               int temp;
               temp=*m;
               *m=*n;
               *n=temp;
}


int main()
{
    int i,j,arr[80],n;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the numbers\n");
    for(i=0;i<n;i++)
    {
                   scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    printf("the sorted elements are ");
    for(i=0;i<n;i++)
    {
                   printf(" %d ",arr[i]);
    }

    return 0;
}

