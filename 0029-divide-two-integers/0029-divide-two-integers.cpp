class Solution {
public:

    long long int solve(long long int dividend, long long int divisor){

        if(divisor==0){
            return INT_MAX;
        }
        long long int s =0;
        long long int e = dividend;
        long long int target = dividend;
        long long int ans = -1;
        while(s<=e){
            long long int mid = s+(e-s)/2;
            long long int product = divisor * mid;

            if(product == target){
                return mid;
            }

            if(product > target){
                e = mid-1;
            }
            else{
                ans = mid;
                s = mid+1;
            }
        }
        return ans;

    }
    int divide(int dividend, int divisor) {
        long long int ans = solve(abs((long long int)dividend), abs((long long int)divisor));
        if(dividend == INT_MIN && divisor == -1)
        return INT_MAX;

        if(dividend >0 && divisor >0){
            return ans;
        }
        else if(dividend <0 && divisor <0){
            return ans;
        }
        else{
            ans = 0-ans;
            return ans;
        }
    }
};