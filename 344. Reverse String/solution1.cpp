class Solution {
public:
    string reverseString(string s) {
        char tmp;
        int len = s.length();
        int a = (len-1)/2;
        for(int i=0;i<=a;i++){
            tmp = s[i];
            s[i] = s[len-i-1];
            s[len-i-1] = tmp;
        }
        return s;
    }
};