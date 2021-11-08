class Solution {
public:
    string reverseWords(string s) {
     string res;
        string temp;
        
        for(int i{0}; s[i] != '\0'; i++){
            if(s[i] != ' '){
                temp += s[i];
            }
            else{
                if(temp.size())
                    res = temp+ ' ' + res;
                temp.clear();
            }
        }
        if(temp.size())
            res = temp + ' ' + res;
        
        res.erase(res.size()-1);
        return res;
    }
};