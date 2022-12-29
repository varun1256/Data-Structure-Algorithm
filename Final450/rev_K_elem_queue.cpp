#include<bits/stdc++.h>
using namespace std;

queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int>s;
    queue<int>q1;
    while(k!=0){
        int a=q.front();
        s.push(a);
        q.pop();
        k--;
    }
    while(!q.empty()){
        int b=q.front();
        q1.push(b);
        q.pop();
    }
    
    while(!s.empty()){
        int c=s.top();
        q.push(c);
        s.pop();
    }
    while(!q1.empty()){
        int d=q1.front();
        q.push(d);
        q1.pop();
    }
    return q;
}