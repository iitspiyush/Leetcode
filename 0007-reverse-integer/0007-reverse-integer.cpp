
class Solution {
public:

    long long int reversenumber(int x){
        long long int ans = 0;
        while(x!=0){
            int digit = x%10;
            ans = 10* ans + digit;
            x = x/10;
        }
        return ans;
    }
    int reverse(int x) {

        bool flag = 0;

        if(x>0){
            flag = 1;
        }
        else{
            flag = 0;

        }
        x= llabs(x);


        long long int ans = reversenumber(x);

        if(flag == 0){
            ans = 0-ans;
        }


        //range 
        if(ans > INT_MAX){
            return 0;
        }
        if(ans < INT_MIN){
            return 0;
        }

        return ans;
        
    }
};