#include <bits/stdc++.h>
using namespace std;

class twoStacks{
    int*arr;
    int size;
    int top1,top2;

    public:
    twoStacks(int n=100){
        size=n;
        arr=new int[n];
        top1=-1;
        top2=size;

    }
    void push1(int);
    void push2(int);
    int pop1();
    int pop2();
};
void twoStacks :: push1(int x)
{if((top1+1)==top2){
    cout<<"OverSize";
}else{
    top1=top1+1;
    arr[top1]=x;
}

}
   
//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
   if((top2-1)==top1){
       cout<<"OverSize";
   }else{
       top2=top2-1;
       arr[top2]=x;
   }
}
   
//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{   int a;
   if(top1==-1){
       return -1;
   }else{
       a=arr[top1];
       top1=top1-1;
   }
   return a;
}

//Function to remove an element from top of the stack2.
int twoStacks :: pop2()
{  int a;
  if(top2==size){
      return -1;
  }else{
      a=arr[top2];
      top2=top2+1;
      
  }
   return a;
   
}