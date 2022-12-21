#include<bits/stdc++.h>
using namespace std;
int runCustomerSimulation(int n,string b){
    unordered_map<char,int>mp;
    int people=0;
    int c=0;
    for(int i=0;i<b.size();i++){
            if(mp[b[i]]==-1){

            }
         else if(c<n&& mp[b[i]]==0){
            mp[b[i]]++;

            c++;
           }
           else if(mp[b[i]]==1){
            mp[b[i]]--;
            c--;
           }
           else if(c>=n &&mp[b[i]]==0){
              people++;
              mp[b[i]]=-1;
           }

    }
    return people;
}

int main()
{
    cout << runCustomerSimulation(2, "ABBAJJKZKZ") << endl;
    cout << runCustomerSimulation(3, "GACCBDDBAGEE") << endl;
    cout << runCustomerSimulation(3, "GACCBGDDBAEE") << endl;
    cout << runCustomerSimulation(1, "ABCBCA") << endl;
    cout << runCustomerSimulation(1, "ABCBCADEED") << endl;
    return 0;
}
