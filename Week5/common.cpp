#include<iostream>
using namespace std;

int getMax(int a[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}

int *count(int a[],int size){
    int max=getMax(a,size);
    int *b=new int[max];
    for(int i=0;i<size;i++){
        b[a[i]]++;
    }
    return b;
}

void common(int *a,int *b,int p,int q){
       int i=0,j=0;
       while(i<p && j<q){
           if(a[i]!=0 && b[j]!=0){
               cout<<i<<" ";
               a[i]--;
               b[j]--;
           }
           else{
               i++;
               j++;
           }
       }
}
    
void readfile()
{
       int size1,size2;
        cin >> size1;
        int array1[size1];
        for (int j = 0; j < size1; j++)
        {
            cin >> array1[j];
        }
        int *b=count(array1,size1);
        cin>>size2;
        int array2[size2];
        for (int j = 0; j < size2; j++)
        {
            cin >> array2[j];
        }
        int *c=count(array2,size2);
        common(b,c,getMax(array1,size1),getMax(array2,size2));
}

int main()
{
    readfile();
    return 0;
}