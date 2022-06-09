#include <iostream>
using namespace std;

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
            i++;
        }

        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
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
void search(int nums[], int numsSize, int target)
{
    int end = numsSize - 1;
    int start = 0;
    while (start < end)
    {
        if (nums[start] + nums[end] > target)
        {
            end--;
        }
        else if (nums[start] + nums[end] < target)
        {
            start++;
        }
        else
            break;
    }
    if (start == end)
    {
        cout << "No such element exist" << endl;
    }
    else
    {

        cout << nums[start] << " " << nums[end]<<endl;
    }
}
void readfile()
{
    int n, size, key;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> size;
        int array[size];
        for (int j = 0; j < size; j++)
        {
            cin >> array[j];
        }
        cin >> key;
        quick_sort(array, 0, size - 1);
        search(array, size, key);
    }
}

int main()
{
    readfile();
    return 0;
}