#include <iostream>
using namespace std;

void duplicate(int arr[], int n)
{
    int result = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i]==arr[i + 1])
        {
            result = 1;
            break;
        }
    }
    if (result == 0)
    {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
}
void merge(int A[], int mid, int low, int high)
{
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
        merge_sort(array, 0, size - 1);
        duplicate(array, size);
    }
}

int main()
{
    readfile();
    return 0;
}