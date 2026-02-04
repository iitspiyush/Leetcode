class Solution {
public:
void reverse1(vector<int>&nums,int i,int j)
{
    while(i<j)
    {
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
}
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};