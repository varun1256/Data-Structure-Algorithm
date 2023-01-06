  #include<bits/stdc++.h>
  using namespace std;

  struct petrolPump{
    int petrol;
    int distance;
  };
  class solution{
    public:
  int tour(petrolPump p[],int n)
    {
       //Your code here
       vector<int>v;
       
       for(int i=0;i<n;i++){
           int k=((p[i].petrol)-(p[i].distance));
           v.push_back(k);
       }
      
      
       
       int start=0;
       int sum=v[start];
       int end=start+1;
       int count=1;
       while(start!=end){
          if(start>=v.size()){
              return -1;
          }
           if(v[start]<0 || sum<0){
               start=start+1;
               if(start==(v.size()-1)){
                   end=0;
               }else{
               end=start+1;
               }
               sum=v[start];
           }
            sum=sum+v[end];
           if(end==(v.size()-1)){
               end=0;
           }else{
               end=end+1;
           }
           
           if(sum<0){
               end=-1;
           }
          
       }
       return start;
    }
  };
  main(){
    int n;
    cin>>n;
    petrolPump p[n];
    solution obj;
    obj.tour(p,n);
  }