#include<bits/stdc++.h>
using namespace std;
char* reverse(char *S, int len)
{
    //code here
    stack<char>s;
    for(int i=0;i<len;i++){
        s.push(S[i]);
    }
    char* p=new char[len+1];
    int i=0;
    while(!s.empty()){
        char f=s.top();
          p[i]=f;
          i++;
          s.pop();
    }
    return p;
}