#include <bits/stdc++.h>
using namespace std;

void insertToBottom(stack<int> S, int N)
{
	vector<int>v;

    while(S.size()!=0){
         int a=S.top();
         S.pop();
         v.push_back(a);

    }
    v.push_back(N);
    for(int i=(v.size()-1);i>=0;i--){
         S.push(v[i]);
    }
    cout<<"Inserted At The Bottom Of the Stack:\n";
     while (!S.empty()) {
        cout << S.top() << " ";
        S.pop();
    }
}


int main()
{
	
	stack<int> S;
	S.push(5);
	S.push(4);
	S.push(3);
	S.push(2);
	S.push(1);

	int N = 7;

	insertToBottom(S, N);

	return 0;
}
