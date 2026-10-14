class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string current = "";
        for(int i = 0; i<s.size(); i++){
            if(s[i] != ' ') current += s[i];
            else{
                if(current.size() > 0){
                    words.push_back(current);
                    current ="";
                }
            }
        }
        // last word if any 
        if(current.size() > 0) words.push_back(current);
        string ans ="";
        for(int i = words.size()-1; i>= 0; i--){
            ans+= words[i];
            if(i!= 0) ans+= " ";
        }
        return ans;
    }
};