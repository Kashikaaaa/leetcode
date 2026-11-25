class Solution {
public:
    int jump(vector<int>& nums) {
        int l=0;
        int r =0;
        int jump =0;
        int farthest = INT_MIN;
        while(r<nums.size()-1){
            for(int i=l;i<=r;i++){
                farthest =max(farthest,nums[i]+i);

            }
            
            l =r+1;
            r =farthest;
            jump++;
            
        }
        return jump;
    }
};