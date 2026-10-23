class Solution {
public:
    bool increasing(vector<int>& arr){
        for(int i = 1; i<arr.size(); i++){
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
        if(increasing(nums) || decreasing(nums)) return true;
        return false;
    }
};