#include <bits/stdc++.h>
using namespace std;

  bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[A[i]]=mp[A[i]]+1;
        }
        for(int i=0;i<n;i++){
            mp[A[i]]--;
            for(int j=i+1;j<n;j++){
                mp[A[j]]--;
                int sum=A[i]+A[j];
                int req=X-sum;
                if(mp.find(req)!=mp.end()){
                    if(req!=0&&mp[req]!=0){
                
                    return true;
                    }
                }
                mp[A[j]]++;
            }
        }
        return false;
    }