#include<iostream>
using namespace std;

int main()
{
    int A[6]={17,3,8,44,2,7};
    int temp,j,i;

    cout<<"Array elements are: \n";
    for(i=0;i<6;i++)
    {
        cout<<A[i]<<"\t";
    }
    
    for(i=0;i<6;i++)
    {

        temp=A[i];
        j=i-1;
        while(j >= 0 && A[j]>temp)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=temp;    
    }
    cout<<"Sorted Array Elements Are: ";
        for(i=0;i<6;i++)
    {
        cout<<A[i]<<"\t";
    }
    return 0 ;
}
