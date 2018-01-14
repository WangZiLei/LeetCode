class Solution {
public:
    string convertToBase7(int num) {
        int sign = 1;
        if(num<0){
            num = num*(-1);
            sign = -1;
        }
        if(num==0)
            return "0";
            
        string res = "";
        
        while(num){
            res = to_string(num%7)+res;
            num = num/7;
        }
        if(sign==-1)
            res = "-"+res;
        return res;
    }
};