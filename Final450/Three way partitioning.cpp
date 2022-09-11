  #include<bits/stdc++.h>
 using namespace std;
  void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
        queue<int>f;
        queue<int>v;
        queue<int>l;
        int n=array.size();
         for(int i=0;i<n;i++){
             if(array[i]<a){
                 f.push(array[i]);
             }
             else if((array[i]>=a) && (array[i]<=b)){
                 v.push(array[i]);
             }
             else if(array[i]>b){
                 l.push(array[i]);
             }
         }
         
             int k=0;
             while(f.size()!=0){
                 array[k]=f.front();
                 
                 k++;
                 f.pop();
             }
              while(v.size()!=0){
                 array[k]=v.front();
                 k++;
                 v.pop();
             }
              while(l.size()!=0){
                 array[k]=l.front();
                 k++;
                 l.pop();
             }
             
        
         
    }