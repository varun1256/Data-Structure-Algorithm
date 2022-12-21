 #include <bits/stdc++.h>
using namespace std;

  int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        int a[3];
        a[0]=A;
        a[1]=B;
        a[2]=C;
        
        sort(a,a+3);
        return a[1];
    }