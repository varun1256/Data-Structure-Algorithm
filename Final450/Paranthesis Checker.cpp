#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {   // [ -91/93 (-40/41 {- 123/125
        // Your code here
        stack<int>v;
        for(int i=0;i<x.size();i++){
            char b=x[i];
            int a=b;
            if(a==91||a==40||a==123){
                v.push(a);
            }
            else if(a==93){
                if(v.empty()||v.top()!=91){
                    return false;
                }
                v.pop();
            }
            else if(a==41){
                if(v.empty()||v.top()!=40){
                    return false;
                }
                v.pop();
            }
            else if(a==125){
                if(v.empty()||v.top()!=123){
                    return false;
                }
                v.pop();
            }
            
        }
        if(!v.empty()){
         return false;
            
             }
        
        return true;
        
    }

};