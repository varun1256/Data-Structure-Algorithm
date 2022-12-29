#include <bits/stdc++.h>
using namespace std;

void interLeaveQueue(queue<int>& q)
{
    queue<int>q1;
    queue<int>q2;
    int s=q.size();
    int half=s*0.5;
	int count=1;
	while(!q.empty()){
	    int a=q.front();
	    if(count<=half){
	        q1.push(a);
	    }else{
	          q2.push(a);
	    }
	    count++;
	    q.pop();
	}
	count=1;
	for(int i=0;i<s;i++){
	     if(count%2==1){
	         int a=q1.front();
	         q.push(a);
	         q1.pop();
	     }
	     else{
	       int a=q2.front();
	       q.push(a);
	       q2.pop();
	     }
	     count++;
	}

	}

int main()
{
	queue<int> q;
	q.push(11);
	q.push(12);
	q.push(13);
	q.push(14);
	q.push(15);
	q.push(16);
	q.push(17);
	q.push(18);
	q.push(19);
	q.push(20);
	interLeaveQueue(q);
	int length = q.size();
	for (int i = 0; i < length; i++) {
		cout << q.front() << " ";
		q.pop();
	}
	return 0;
}
