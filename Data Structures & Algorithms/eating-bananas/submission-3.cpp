class Solution {
public:
    bool eatingSpeed(vector<int>& piles, int h, int n){
        long long totalHours=0;
        for( auto pile: piles){
            totalHours+=(pile+n-1)/n;
        }
        return totalHours<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin(),piles.end());
        int mini = 1;
        int ans=maxi;
        while(mini < maxi){
             int mid = mini + (maxi - mini) / 2;
             if(eatingSpeed(piles,h,mid)){
                ans=mid;
                maxi=mid;
             }
             else{
                mini=mid+1;
             }
        }
        return ans;
    }
};
