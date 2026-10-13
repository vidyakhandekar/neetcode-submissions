class Solution {
public:
    int maxProfit(vector<int>& prices) {

      int bp=0;
      int sp=1;
      int maxP=0;

    while(bp<prices.size() && sp<prices.size()){
        if(prices[bp]<prices[sp]){
            int p = prices[sp]-prices[bp];
            maxP=max(maxP,p);
    
        }
        if(prices[bp]>prices[sp]){
            bp=sp; 
        }
        sp++;

    }
    return maxP;
    }
};
