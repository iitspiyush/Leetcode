class Solution {
public:
    bool binarysearch(vector<int>& nums, int s, int e, int target){

        while(s<=e){
            int mid = s +((e-s)/2);

            if(nums[mid]== target){
                return true;
            }
            else if(nums[mid]> target){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return false;
    }
    int findPairs(vector<int>& nums, int k) {
        if(k<0){
            return 0;
        }

        sort(nums.begin(), nums.end());

        int n = nums.size();    
        int count =0;
        for(int i=0;i<n;i++){
            
            if(i>0 && nums[i]==nums[i-1]) continue;

            int target = nums[i]+k;

            if(binarysearch(nums, i+1, n-1, target)){
                count++;
            }
        }
        return count;
    }
};