class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int ans = n;

        while(s<=e){
            int mid = (e+s)/2;
            
            if(nums[mid]== mid){ // index or value same hai to right side hoga
                s = mid+1;

            }

            else { //value jo hai index se 1 badi hai

                ans = mid;
                e = mid -1;
            }
        }
        return ans;
        
        
    }
};