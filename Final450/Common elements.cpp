 #include <bits/stdc++.h>
using namespace std;

 vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
          
            unordered_map<int,int>mp1;
            unordered_map<int,int>mp2;
            unordered_map<int,int>mp3;
            
             for(int i=0;i<n1;i++){
                mp1[A[i]]=mp1[A[i]]+1;
                }
            
             for(int i=0;i<n2;i++){
               if(mp1.find(B[i])!=mp1.end()){
                    if(mp1[B[i]]!=0){
                        mp2[B[i]]=mp2[B[i]]+1;
                      mp1[B[i]]--;
                     }
                }
             }
             
               for(int i=0;i<n3;i++){
                if(mp2.find(C[i])!=mp2.end()){
                    if(mp2[C[i]]!=0){
                        mp3[C[i]]=mp3[C[i]]+1;
                      mp2[C[i]]--;
                     }
                }
             }
             vector<int>v;
             unordered_map<int,int>::iterator it=mp3.begin();
               while(it!=mp3.end()){
                   v.push_back(it->first);
                     it++;
                }
                sort(v.begin(),v.end());
             return v;
        }