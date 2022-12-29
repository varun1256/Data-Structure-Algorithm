#include<bits/stdc++.h>
using namespace std;
class QueueStack{
    private:
    queue<int>q1;
    queue<int>q2;

    public:
    void push(int);
    int pop();

};
void QueueStack :: push(int x)
{
        // Your Code
        
        q1.push(x);
        
        while(q1.size()!=1){
            int a=q1.front();
            q2.push(a);
            q1.pop();
        }
        while(!q2.empty()){
            int b=q2.front();
            q1.push(b);
            q2.pop();
        }
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        // Your Code   
        if(q1.empty()){
            return -1;
        }
        int a=q1.front();
        q1.pop();
        return a;
}
