class Solution {
public:
  vector<int>dp; 
   int findMin(int n,vector<int>& cost ){
     if(n>=cost.size()) return 0;
     if(dp[n]!=-1) return dp[n];

    dp[n]= min((findMin(n+1,cost)+cost[n]),(findMin(n+2,cost)+cost[n]));
     return dp[n];
   }
    int minCostClimbingStairs(vector<int>& cost) {    
        dp.assign(cost.size(),-1);
        return min(findMin(0,cost),findMin(1,cost));
    }
};
