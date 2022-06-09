#include<iostream>
using namespace std;
int comp=0;
int swaps=0;

void display(int arr[], int n)
{
    for(int i=0;i<n;i++)
   cout<<arr[i]<<" ";
   cout<<endl;
}
int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (A[i] <= pivot)
        {
            comp++;
            i++;
        }

        while (A[j] > pivot)
        {
            comp++;
            j--;
        }

        if (i < j)
        {
            swaps++;
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    swaps++;
    return j;
}

void quick_sort(int A[], int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(A, low, high); 
        quick_sort(A, low, partitionIndex - 1);
        quick_sort(A, partitionIndex + 1, high);
    }
}
void readfile()
{
    int n, size;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> size;
        int array[size];
        for (int j = 0; j < size; j++)
        {
            cin >> array[j];
        }
        swaps=0;
        comp=0;
        quick_sort(array, 0, size - 1);
        display(array,size);
        cout<<"comparisons="<<comp<<endl;
        cout<<"swaps="<<swaps<<endl;
    }
}

int main()
{
    readfile();
    return 0;
}