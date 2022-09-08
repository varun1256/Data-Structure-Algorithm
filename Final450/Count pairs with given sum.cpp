#include<bits/stdc++.h>
 using namespace std;
  int getPairsCount(int arr[], int n, int k) {
      
        int count=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]=mp[arr[i]]+1;

        }
        for(int i=0;i<n;i++){
            int req=k-arr[i];
            if(mp.find(req)!=mp.end()){
                if(req==arr[i]){
                    mp[req]--;
                }
                count+=mp[req];
                if(req!=arr[i]){
                mp[arr[i]]--;
                }
            }
        }
        return count;
        }