#include <iostream>
#include <math.h>
#include "binary.h"
using namespace std;

void jump_search(int arr[], int key, int n)
{
    int e=0,s=0,n_s=e,comp=0;
   while(key>arr[e]){
       comp++;
      e=e+(e-s+1)*2;
      if(e>n){
          e=n-1;
          comp++;
      }
      s=n_s+1;
   }
   if(binary(arr,key,s,e)==false)
   cout<<"Not Present "<<comp<<endl;
   else
   cout<<"Present "<<comp<<endl;
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
        jump_search(array, key, size);
    }
}

int main()
{
    readfile();
}