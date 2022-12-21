#include<bits/stdc++.h>
using namespace std;
vector<int> find(int arr[], int n , int x )
{
    // code here
    stack<int>v;
    vector<int>ans;
    int flag=0;
    
    for(int i=n;i>=0;i--){
        if(arr[i]==x){
            v.push(i);
            flag=1;
        }
    }
    if(flag==0){
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
    ans.push_back(v.top());
    while(!v.empty()){
        if(v.size()==1){
            ans.push_back(v.top());
        }
        v.pop();
    }
    return ans;
    
}