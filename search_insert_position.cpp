class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size() ;
        int start= 0 ;
        int last= n-1 ;
        int mid= start + (last - start)/2 ;
        while(start <= last){
            mid= start + (last- start)/2 ;
            if(nums[mid] == target){
                return mid ;
            }
            else if(nums[mid] > target){
                last= mid -1 ;
            }
            else{
                start= mid + 1 ;
            }
        }
		// Edge Case
        return start ;
    }
};
