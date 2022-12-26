#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {   
        stack<int>v;
        
        for(int i=0;i<x.length();i++){
              int k=x[i];
            if(k==123||k==91||k==40){
                v.push(k);
            }
            else if(k==125||k==93||k==41){
                if(v.empty()){
                    return false;
                }
                int ch=v.top();
                if((ch==123&&k!=125)||(ch==91&&k!=93)||(ch==40&&k!=41)){
                    return false;
                }
                v.pop();
            }
        }
        if(v.empty()){
            return true;
        }
        return false;
    }

};