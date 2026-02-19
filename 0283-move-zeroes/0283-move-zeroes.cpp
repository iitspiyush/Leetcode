class Solution {
public:
    void moveZeroes(vector<int>& arr) {

        int n= arr.size();

        int s =0;
        int e = 0;

        while(s<n){
            if(arr[s]!= 0){
                swap(arr[s], arr[e]);
                    e++;
                
            }
            s++;
            
        }
    }
};