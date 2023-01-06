#include <bits/stdc++.h>
using namespace std;


void reverse(stack<int>& st)
{
    vector<int>v;

    while(st.size()!=0){
         int a=st.top();
         st.pop();
         v.push_back(a);

    }
    for(int i=0;i<v.size();i++){
        st.push(v[i]);
    }


}


int main()
{
	stack<int> st, st2;
	
	for (int i = 1; i <= 4; i++) {
		st.push(i);
	}

	st2 = st;

	cout << "Original Stack" << endl;
	
	while (!st2.empty()) {
		cout << st2.top() << " ";
		st2.pop();
	}
	cout<<endl;

	reverse(st);
	cout << "Reversed Stack" << endl;
	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}
	return 0;
}
