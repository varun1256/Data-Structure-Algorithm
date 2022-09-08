 #include<bits/stdc++.h>
 using namespace std;
  int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      int count=1;
      int new_count=INT_MIN;
      map<int,int>mp;
      for(int i=0;i<N;i++){
          mp[arr[i]]=arr[i];
        }
      map<int,int>::iterator it=mp.begin();
        while(it!=mp.end()){
            int f=it->first;
            int next=f+1;
            if(mp.find(next)!=mp.end()){
                count++;
             }
            else{
         new_count=max(count,new_count);
         count=1;
            }
            it++;
        }
        return new_count;
    }