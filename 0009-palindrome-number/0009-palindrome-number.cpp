class Solution {
public:
    bool isPalindrome(int x) {
        
        int num = x;
        long long int ans =0 ;
        if(x<0){
            return false;
        }
        while(x>0){
            long long int digit = x%10;
            ans = ans*10 + digit;
            x = x/10;
        }
        if(num == ans){
            return true;
        }
        else{
            return false;
        }
    }
};