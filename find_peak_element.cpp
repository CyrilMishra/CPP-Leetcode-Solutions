class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size() ;
        int s=0,h=n-1,mid ;
        while(s<h){
            mid = s+(h-s)/2 ;
            int t = nums[mid] ;
            if(t<nums[mid+1]){
                s = mid+1 ;
            }
            else{
                h = mid ;
            }
        }
        return s ;
    }
};
