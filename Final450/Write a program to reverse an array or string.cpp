#include<iostream>
using namespace std;

void print(int arr[],int n ){
    cout<<"\nArray is :\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
void reverse(int arr[],int n ){
    int arr2[20];
    int k=0;
    for(int i=n-1;i>=0;i--){
        arr2[k]=arr[i];
        k++;
       }
       int m=k;
    for(int i=0;i<m;i++){
        arr[i]=arr2[i];
       }
       cout<<"\nArray is reversed";
}

int main(){
    int arr[20],n;
    cout<<"Enter the no of elements you want to enter:";
    cin>>n;
    for(int i=0;i<n;i++){
          cin>>arr[i];
    }
    print(arr,n);
    reverse(arr,n);
    print(arr,n);
     
}