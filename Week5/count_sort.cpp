#include <bits/stdc++.h>
using namespace std;

void Count(char A[], int n)
{
    int b[26];
    for (int i = 0; i < 26; i++)
        b[i] = 0;
    for (int i = 0; i < n; i++)
    {
        b[A[i] - 97]++;
    }
    int max = 0, index = 0;
    for (int i = 0; i < 26; i++)
    {
        if (b[i] > max)
        {
            index = i;
            max = b[i];
        }
    }
    if (max == 1)
    {
        cout << "No Duplicates Present" << endl;
    }
    else
    {
        cout << char(index + 97) << "-" << max << endl;
    }
}
void readfile()
{
    int n, size, k;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> size;
        char array[size];
        for (int j = 0; j < size; j++)
        {
            cin >> array[j];
        }
        Count(array, size);
    }
}

int main()
{
    readfile();
    return 0;
}