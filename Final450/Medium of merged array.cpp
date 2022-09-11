#include<bits/stdc++.h>
using namespace std;
int Solution(int arr[], int n)
{
   sort(arr,arr+n);
		     if(n%2==1){
		         int pos=n/2;
		         return arr[pos];
		     }
		     else{
		         int pos=n/2;
		         int pos2=pos-1;
		         int ans=(arr[pos]+arr[pos2])*0.5;
		         return ans;
		     }

}