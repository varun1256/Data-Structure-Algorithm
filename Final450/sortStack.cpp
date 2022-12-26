#include<bits/stdc++.h>
using namespace std;
 stack<int>s;
void sorting()
{ 
   //Your code here
   vector<int>v;
   while(!s.empty()){
       int a=s.top();
       v.push_back(a);
       s.pop();
   }
   
   std::sort(v.begin(),v.end());
   
  for(int i=0;i<v.size();i++){
      s.push(v[i]);
  }
}