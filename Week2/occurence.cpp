#include <iostream>
using namespace std;

int binary_search(int a[], int key, int size,bool first)
{
    int start = 0, end = size - 1, mid, index = -1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (a[mid] > key)
        {
            end = mid - 1;
        }
        else if (a[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            index=mid;
            if(first){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
    }
    return index;
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
        int index1 = binary_search(array, key, size,true);
        int index2 = binary_search(array, key, size,false);
        if (index1 != -1)
            cout << array[index1] << "-" << index2 - index1 + 1<< endl;
        else
            cout << "Key not present" << endl;
    }
}

int main()
{
    readfile();
}