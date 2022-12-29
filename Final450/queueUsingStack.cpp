#include<bits/stdc++.h>
using namespace std;

class StackQueue{
    stack<int>s1;
    stack<int>s2;

    public:
    void push(int);
    int pop();
};
void StackQueue :: push(int x)
{
    // Your Code
     while(!s2.empty()){
         int a=s2.top();
         s1.push(a);
         s2.pop();
     }
     s1.push(x);
     while(!s1.empty()){
         int b=s1.top();
         s2.push(b);
         s1.pop();
     }
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        // Your Code     
        if(s2.empty()){
            return -1;
        }
        int c=s2.top();
        s2.pop();
        return c;
}
