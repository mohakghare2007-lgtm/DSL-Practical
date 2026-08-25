#include<iostream>
using namespace std;

void quicksort(int a[],int low,int high)
{
    int i=low;
    int j=high;
    int pivot=a[low];

    do
    {
        while(a[i]<pivot)
            i++;

        while(a[j]>pivot)
            j--;

        if(i<=j)
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;

            i++;
            j--;
        }

    }while(i<=j);

    if(low<j)
        quicksort(a,low,j);

    if(i<high)
        quicksort(a,i,high);
}

int main()
{
    int a[]={10,7,8,9,1,5};
    int n=6;

    cout<<"Before sorting: ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    quicksort(a,0,n-1);

    cout<<"\nAfter sorting: ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
