#include<iostream>
using namespace std;

void linear_search(int arr[],int key,int n){
   int comp=0;
    for(int i=0;i<n;i++){
            comp++;
        if(key==arr[i]){
            cout<<"Present "<<comp<<endl;
            break;
        }
        if(i==n-1 && key!=arr[n])
        {
            cout<<"Not Present "<<comp<<endl;
        }
    }
}
void readfile(){
    int n, size, key;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>size;
        int array[size];
        for(int j=0; j<size; j++){
            cin>>array[j];
        }
        cin>>key;
      linear_search(array,key,size);
    }
}

int main(){
    readfile();
}