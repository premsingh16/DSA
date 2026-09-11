class Solution {
private:
  void reverse(string& arr, int left , int right){
        while(left < right){
           swap(arr[left++],arr[right--]);
        }
    }    
public: 
    string reverseWords(string s) {
        string arr = s;
        int left = 0; int right = 0;
        while(right < arr.size()){
            // if we find a space reverse the word 
            if(arr[right] == ' '){
                reverse(arr , left , right-1);
                left = right+1;
            }
            right++;
        }
        // reverse the last word
        reverse(arr , left , right -1);
        return arr;

    }
};