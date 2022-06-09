#include<iostream>
using namespace std;

void difference(int array[],int size,int diff){
        int count=0,r=0,l=0;
        while(r<size){
            if(array[r]-array[l]>diff){
                l++;
            }
            else if(array[r]-array[l]<diff){
                r++;
            }
            else{
                count++;
                l++;
                r++;
            }
        }
        cout<<count<<endl;
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

void readfile()
{
    int n, size,key;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> size;
        int array[size];
        for (int j = 0; j < size; j++)
        {
            cin >> array[j];
        }
        cin>>key;
        quick_sort(array,0,size-1);
        difference(array,size,key);
    }
}

int main()
{
    readfile();
}