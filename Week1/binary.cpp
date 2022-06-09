#include<iostream>
using namespace std;

bool binary(int arr[],int key,int start,int end){
   int comp=0;
   bool found=false;
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
            return true;
       }
   }
    return false;
}