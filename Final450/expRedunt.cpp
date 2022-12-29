
#include <bits/stdc++.h>
using namespace std;


bool checkRedundancy(string& str)
{    stack<int>s;
	if(str.length()==0){
	   return true;
	}
	for(int i=0;i<str.length();i++){
	   if(str[i]=='('){
	      s.push(str[i]);
	   }
	   if(str[i]=='+'||str[i]=='*'||str[i]=='-'||str[i]=='/'){
	      s.push(str[i]);
	   }
	   if(str[i]==')'){
	        if(s.size()==0){
            return true;
	        }
	       if(s.top()=='('){
	           return true;
	       }
	       while(s.top()!='('){
                s.pop();
              }
              s.pop();
	}
	}
	return false;

}

void findRedundant(string& str)
{
	bool ans = checkRedundancy(str);
	if (ans == true)
		cout << "Yes\n";
	else
		cout << "No\n";
}


int main()
{
	string str = "(())";
	findRedundant(str);
	return 0;
}
