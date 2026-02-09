class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n  = nums.size();

        int s =0;
        int e = n-1;
        int ans = -1;
        while(s<=e){
            int mid = s +((e-s)/2);

            if(nums[mid]== target){
                ans = mid;
                e= mid-1;
            }
            else if(nums[mid]> target){
                e = mid-1;

            }
            else{
                s = mid+1;
            }
        }
        

        int l =0;
        int r = n-1;
        int ans1 = -1;
        while(l<=r){
            int mid = l+((r-l)/2);

            if(nums[mid]==target){
                ans1 = mid;
                l = mid+1;
            }
            else if(nums[mid]>target){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return {ans,ans1};
    }
};