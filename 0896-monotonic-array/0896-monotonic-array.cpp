class Solution {
public:
    bool increasing(vector<int>& arr){
        int n = arr.size();
        for(int i = 1; i<n ;  i++){
            if(arr[i] >= arr[i-1]) continue;
            else return false;
        }
        return true;
       
 }
    bool decreasing(vector<int>& arr){
        for(int i = 1; i<arr.size(); i++){
            if(arr[i] <= arr[i-1]) continue;
            else return false;
        }
        return true;
       
    }
    bool isMonotonic(vector<int>& nums) {
        if(decreasing(nums) || increasing(nums)) return true;
        return false;
    }
};