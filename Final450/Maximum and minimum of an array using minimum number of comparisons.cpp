#include<iostream>
using namespace std;

void print(int arr[],int n ){
    cout<<"\nArray is :\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
void max(int arr[],int n){
    int k=arr[0];
    for(int i=0;i<n;i++){
        if(k<arr[i]){
            k=arr[i];
        }
    }
    cout<<"\nMaximum no is:"<<k;

}
void min(int arr[],int n){
    int k=arr[0];
    for(int i=0;i<n;i++){
        if(k>arr[i]){
            k=arr[i];
        }
    }
    cout<<"\nMinimum no is:"<<k;

}
int main(){
    int arr[20],n;
    cout<<"Enter the no of elements you want to enter:";
    cin>>n;
    for(int i=0;i<n;i++){
          cin>>arr[i];
    }
    print(arr,n);
    max(arr,n);
    min(arr,n);

}