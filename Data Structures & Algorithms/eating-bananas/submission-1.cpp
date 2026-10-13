class Solution {
public:

    bool finishBanana(int s , vector<int>& piles ,int h ){

        for(int i=0;i<piles.size();i++){
            if(h<=0) return false; 
            double val=double(piles[i])/double(s);
            h-=ceil(val);
         
        }
        return h<0 ? false : true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
      int mini=0;
      int maxi=*max_element(piles.begin(),piles.end())+1;

      while(mini+1<maxi){

        int mid=mini+(maxi-mini)/2;
        if(finishBanana(mid,piles,h)){
            maxi=mid;
        }
        else{
            mini=mid;
        }
      }
      return maxi;
    }
};
