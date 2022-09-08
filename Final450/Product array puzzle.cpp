 #include <bits/stdc++.h>
using namespace std;
 
 vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here  
        vector<long long int>v;
        long long int m=1,s,k;
        int t=0;
        for(int i=0;i<n;i++){
            k=nums[i];
            if(nums[i]==0){
                t++;
                k=1;
            }
            m=m*k;
            }
            for(int i=0;i<n;i++){
                k=nums[i];
                 if(t>1){
                    m=0;
                }
                if(nums[i]==0){
                    
                    k=1;
                }
               
                 if(nums[i]!=0&&t==1){
                    s=0;
                }
                else{
                s=(m/k);
                }
                
                v.push_back(s);
            }
            return v;
    }