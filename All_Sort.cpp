#include <iostream>
using namespace std;

// Bubble Sort
void bubbleSort(int A[], int n)
{
    int temp;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

// Insertion Sort
void insertionSort(int A[], int n)
{
    int temp, j;

    for(int i = 1; i < n; i++)
    {
        temp = A[i];
        j = i - 1;

        while(j >= 0 && A[j] > temp)
        {
            A[j + 1] = A[j];
            j--;
        }

        A[j + 1] = temp;
    }
}

// Selection Sort
void selectionSort(int A[], int n)
{
    int minIndex, temp;

    for(int i = 0; i < n - 1; i++)
    {
        minIndex = i;

        for(int j = i + 1; j < n; j++)
        {
            if(A[j] < A[minIndex])
            {
                minIndex = j;
            }
        }

        temp = A[i];
        A[i] = A[minIndex];
        A[minIndex] = temp;
    }
}

// Display Array
void display(int A[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << A[i] << "\t";
    }
    cout << endl;
}

int main()
{
    int A[] = {17, 3, 8, 44, 2, 7};
    int n = 6;

    cout << "Original Array: ";
    display(A, n);

    // Bubble Sort
    bubbleSort(A, n);
    cout << "Bubble Sort: ";
    display(A, n);

    // Reset array
    int B[] = {17, 3, 8, 44, 2, 7};

    // Insertion Sort
    insertionSort(B, n);
    cout << "Insertion Sort: ";
    display(B, n);

    // Reset array
    int C[] = {17, 3, 8, 44, 2, 7};

    // Selection Sort
    selectionSort(C, n);
    cout << "Selection Sort: ";
    display(C, n);

    return 0;
}
