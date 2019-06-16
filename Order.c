#include <stdio.h>
#define N 10

int main()
{
    int a[]={2,3,6,7,8,9,0,1,4,5};
    //void insertOrder(int a[],int length);
    //insertOrder(a,N);
    void insertOrderByPointer(int a[],int length);
    insertOrderByPointer(a,N);

    for (int i = 0; i < N; i++)
    {
        printf("%d\t",a[i]);
    }

    return 0;
}

void insertOrder(int a[],int length)
{
    for(int i=0;i<N-1;i++)
    {
        int minIndex = i;
        for(int j=i+1;j<=(N-1);j++)
        {
            if(a[minIndex]>a[j])
            {
                minIndex = j;
            }
        }
        int temp;
        temp=a[i];
        a[i]=a[minIndex];
        a[minIndex]=temp;
    }
}
void insertOrderByPointer(int a[],int length)
{
    for(int i=0;i<N-1;i++)
    {
        int *min = &a[i];
        for(int j=i+1;j<=(N-1);j++)
        {
            if(*min>a[j])
            {
                min = &a[j];
            }
        }
        int temp;
        temp=a[i];
        a[i]=*min;
        *min=temp;
    }
}