#include<iostream>
using namespace std;


void binary_search(int arr[],int key,int n){
   int comp=0;
   bool found=false;
   int start=0,end=n-1;
   while(start<=end){
       int mid=start+(end-start)/2;
        comp++;
       if(key<arr[mid]){
           end=mid-1;
       }
       else if(key>arr[mid]){
           start=mid+1;
       }
       else{
            found=true;
            break;
       }
   }
   if(found==true){
       cout<<"Present "<<comp<<endl;
   }
   else{
       cout<<"Not Present "<<comp<<endl;
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
      binary_search(array,key,size);
    }
}

int main(){
    readfile();
}