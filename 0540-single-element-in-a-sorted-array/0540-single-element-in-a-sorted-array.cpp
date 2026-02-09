class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size();
        int s =0;
        int e = n-1;

        while(s<=e){
            if(s==e){
                return nums[s];
            }

            int mid = s+((e-s)/2);

            int currentvalue = nums[mid];
            int leftvalue = -1;
            if(mid>0){
                leftvalue = nums[mid-1];
            }
            int rightvalue = -1;
            if(mid< n-1){
                rightvalue = nums[mid+1];
            }

            if(currentvalue!= leftvalue && currentvalue != rightvalue){
                return currentvalue;
            }

            if(currentvalue == leftvalue && currentvalue!= rightvalue){
                //iska matlab jo current value hai wo left ke equal hai means 3,3 4 and middle 
                //3 is current element

                int pairindex = mid-1;
                if(pairindex & 1){
                    // means odd
                    e = mid -1;

                }
                else{
                    s = mid+1;
                }
            }
            if(currentvalue != leftvalue && currentvalue == rightvalue){

                int pairindex = mid;

                if(pairindex & 1){
                    e = mid-1;
                }
                else{
                    s = mid+1;
                }
            }

        }
        return 0;
        
    }
};