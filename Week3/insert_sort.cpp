#include<iostream>
using namespace std;
void insert_sort(int arr[],int n){
    int i,key,j,shift=0,comp=0;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            shift++;
            comp++;
            j=j-1;
        }
        arr[j+1]=key;
        shift++;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Comparison="<<comp<<endl;
    cout<<"Shifts="<<shift<<endl;
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
      insert_sort(array,size);
    }
}

int main(){
    readfile();
    return 0;
}
