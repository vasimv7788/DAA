#include<bits/stdc++.h>
using namespace std;

void smallorlarge(int A[],int n,int k){
    if(k>n){
        cout<<"Not present"<<endl;
    }
    else{
        cout<<A[k-1]<<endl;
    }
}

int maximum(int A[], int n){
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < A[i]){
            max = A[i];
        }
    }
    return max;
    
}

void Countsort(int A[], int n){
    int i, j;

    int max = maximum(A, n); 

    int* count = (int *) calloc(max+1,sizeof(int));

    for (i = 0; i < max+1; i++)
    {
        count[i] = 0; 
    }
    for (i = 0; i < n; i++)
    {
        count[A[i]] = count[A[i]] + 1; 
    }

    i =0;
    j =0;

    while(i<= max){
        if(count[i]>0){
            A[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else{
            i++;
        }
    } 
}

void readfile()
{
    int n, size,k;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> size;
        int array[size];
        for (int j = 0; j < size; j++)
        {
            cin >> array[j];
        }
        cin>>k;
        Countsort(array,size);
        smallorlarge(array,size,k);
    }
}

int main()
{
    readfile();
    return 0;
}