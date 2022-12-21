  #include<bits/stdc++.h>
using namespace std;
  int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(target==nums[i]){
                return i;
            }
            if(target<nums[i]){
                break;
            }
        }
        
        
        for(int i=(nums.size()-1);i>=0;i--){
            if(target==nums[i]){
                return i;
            }
         }
        return  -1;
    }