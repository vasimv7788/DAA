#include <iostream>
using namespace std;
int comp=0;
int inver=0;
void display(int arr[], int n)
{
    for(int i=0;i<n;i++)
   cout<<arr[i]<<" ";
   cout<<endl;
}
void merge(int A[], int mid, int low, int high)
{
    inver++;
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
        comp++;
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}

void merge_sort(int A[], int low, int high)
{
    int mid;
    int size = high + 1;
    if (low < high)
    {
        mid = (low + high) / 2;
        merge_sort(A, low, mid);
        merge_sort(A, mid + 1, high);
        merge(A, mid, low, high);
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
        comp=0;
        inver=0;
        merge_sort(array, 0, size - 1);
        display(array,size);
        cout<<"comparisons="<<comp<<endl;
        cout<<"inversions="<<inver<<endl;
    }
}

int main()
{
    readfile();
    return 0;
}