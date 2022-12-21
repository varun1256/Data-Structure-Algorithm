
 int countSquares(int N) {
        // code here
        int i=1;
        int k=1;
        int count=0;
        while(k<N){
            k=i*i;
            count++;
            i++;
            
        }
      if((count-1)==-1){
          return 0;
      }
        return count-1;
    }