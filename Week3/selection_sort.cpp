#include<iostream>
using namespace std;

void selection_sort(int arr[],int n){
    int i,mini,pos,j,swaps=0,comp=0;
    for(i=0;i<n-1;i++){
        mini=arr[i];
        pos=i;
        for(j=i+1;j<n;j++){
                    comp++;
            if(mini>arr[j]){
                mini=arr[j];
                pos=j;
            }
        }

                swaps++;
            arr[pos]=arr[i];
            arr[i]=mini;

    }
     for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Comparison="<<comp<<endl;
    cout<<"Swap="<<swaps<<endl;

}

void readfile(){
    int n, size;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>size;
        int array[size];
        for(int j=0; j<size; j++){
            cin>>array[j];
        }
      selection_sort(array,size);
    }
}

int main(){
    readfile();
    return 0;
}