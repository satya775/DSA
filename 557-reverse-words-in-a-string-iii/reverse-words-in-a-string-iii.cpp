class Solution {
public:
    string reverseWords(string s) {
        int space = 0;
        for(int i=1; i<s.size(); i++){
            if(s[i] == ' '){
                reverse(s.begin()+space, s.begin()+i);
                space = i +1;
            }
        }
        reverse(s.begin() + space, s.end());
        return s;
    }
};