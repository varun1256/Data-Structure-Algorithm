 #include<bits/stdc++.h>
 using namespace std;
 long long maxSubarraySum(int arr[], int n){
        long long sum,k=INT_MIN;
        // Your code here
        for(int i=0;i<(n-1);i++){
            for(int j=1;j<=(n-i);j++){
                sum=0;
                for(int z=i;z<(i+j);z++){
                    sum+=arr[z];
                }
                if(k<sum){
                    k=sum;
                    
                }
            }
        }
        for(int r=0;r<n;r++){
            if(k<arr[r]){
                k=arr[r];
            }
        }
        return k;
        
        
        
        
    }
    //best way
     long long maxSubarraySum(int arr[], int n){
          int sum=INT_MIN,cursum=0;
        for(int i=0;i<n;i++){
            cursum+=arr[i];
            sum=max(cursum,sum);
            if(cursum<0)cursum=0;
        }
        return sum;
     }
