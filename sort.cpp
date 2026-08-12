#include <iostream>
using namespace std;

int main()
{
    int A[5], i, j, min, temp;
    
    cout << "Enter the array elements: ";
    for (i = 0; i < 5; i++)
    {
        cin >> A[i];
    }
    
    cout << "\nOriginal array elements are: ";
    for (i = 0; i < 5; i++)
    {
        cout << A[i] << "\t";
    }
    
    for (i = 0; i < 4; i++)
    {
        min= i;
        for (j = i + 1; j < 5; j++)
        {
            if (A[j] < A[min])
            {
                min = j;
            }
        }
        temp = A[min];
        A[min] = A[i];
        A[i] = temp;
    }
    
    cout << "\nSorted array elements are: ";
    for (i = 0; i < 5; i++)
    {
        cout << A[i] << "\t";
    }
    cout << endl;
    
    return 0;
}
