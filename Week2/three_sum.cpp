#include <iostream>
using namespace std;

void three_sum(int a[], int size)
{
    int i = size - 1;
    bool found = false;
    while (i >= 0)
    {
        int first = 0, second, third = i;
        second=third-1;
        while (first < second)
        {
            if (a[second] + a[first] < a[third])
            {
                first++;
            }
            else if (a[second] + a[first] > a[third])
            {
                second--;
            }
            else
            {
                found = true;
                cout << first + 1<< " " << second +1 << " " << third + 1 << endl;
                break;
            }
        }
        i--;
    }
    if (found==false)
    {
        cout << "No sequence found" << endl;
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
        three_sum(array,size);
    }
}

int main()
{
    readfile();
}