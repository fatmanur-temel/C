#include <stdio.h>
#include <stdlib.h>
#define max 50
/*void bubblesort(int arr[],int size)
{
    int i,j;

    for(i=0;i<size;i++)
    {
        for(j=1;j<size-i;j++)
        {
            if(arr[j-1]>arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
}

int main()
{
   int array[max],size;
   int i;

   printf("dizi kac elemanli: ");
   scanf("%d",&size);

   for(i=0;i<size;i++)
   {
       scanf("%d",&array[i]);
   }
   bubblesort(array,size);

   for(i=0;i<size;i++)
   {
       printf("%d ",array[i]);
   }
    return 0;
}*/


/*void selectionsort(int arr[],int size)
{
    int i,j,min;

    for(i=0;i<size;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}

int main()
{
   int array[max],size;
   int i;

   printf("dizi kac elemanli: ");
   scanf("%d",&size);

   for(i=0;i<size;i++)
   {
       scanf("%d",&array[i]);
   }
   selectionsort(array,size);

   for(i=0;i<size;i++)
   {
       printf("%d ",array[i]);
   }
    return 0;
}*/


void insertionsort(int arr[],int size)
{
    int i,j;

    for(i=1;i<size;i++)
    {
        int eleman=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>eleman)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=eleman;
    }
}

int main()
{
   int array[max],size;
   int i;

   printf("dizi kac elemanli: ");
   scanf("%d",&size);

   for(i=0;i<size;i++)
   {
       scanf("%d",&array[i]);
   }
   insertionsort(array,size);

   for(i=0;i<size;i++)
   {
       printf("%d ",array[i]);
   }
    return 0;
}

