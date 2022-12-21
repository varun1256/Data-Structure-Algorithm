 #include<bits/stdc++.h>
 using namespace std;
 int romanToDecimal(string &str) {
        // code here
        int s=0;
        unordered_map<char,int>mp;
        mp['I']=1;
         mp['V']=5;
          mp['X']=10;
           mp['L']=50;
            mp['C']=100;
             mp['D']=500;
              mp['M']=1000;
              
              for(int i=0;i<str.size();i++){
                  if(mp[str[i]]<mp[str[i+1]]){
                      int k=mp[str[i+1]]-mp[str[i]];
                      s=s+k;
                      i++;
                  }else{
                     s=s+mp[str[i]];
                  }
                     
              }
        return s;
    }