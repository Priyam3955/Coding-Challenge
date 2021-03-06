class Solution {
public:
  int candy(vector<int>& ratings) {
        int size = ratings.size(); 
       vector<int> lv(size,1);
       vector<int> rv(size,1);
      
      for(int i= 1; i< size; i++){
          if(ratings[i-1] < ratings[i]){
              lv[i] = lv[i-1]+ 1;
          }
      }
       for(int i= size-2; i >= 0 ; i--){
          if(ratings[i+1] < ratings[i]){
              rv[i] = rv[i+1] + 1;
          }
      }
      int ans=0;
      for(int i =0 ; i< size;i++){
         ans += max(lv[i] ,rv[i]); 
      }
      return ans;
     /*
               int size = ratings.size();
         vector<int> lv(size,1);
      vector<int>rv(size,1);
         for(int i=1;i<size;i++){
             if(ratings[i-1]<ratings[i])
                 lv[i] = lv[i-1]+1;
         }
         for(int i=size-2;i>=0;i--){
             if(ratings[i+1]<ratings[i])
                 rv[i] = rv[i+1]+1;
         }
         int sum = 0;
         for(int i=0;i<size;i++){
             sum+=max(lv[i],rv[i]);
         }
         return sum;
*/
    }
};