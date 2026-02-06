class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int n = nums.size();

        int s = 0;
        int e =n-1;
        int ans = 0;
        int mid = (s+e)/2;

        while(s<e){
            

            if(nums[mid]< nums[mid+1]){
                s = mid+1;
            }
            else{
                e = mid;
            }
            mid = (e+s)/2;
        }
        return mid;

       
        return ans;

        
    }
};