class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i=left;i<=right;i++){
            if(is_self_dividing_number(i))
                res.push_back(i);
        }
        return res;
    }

    bool is_self_dividing_number(int n){
    	int x = n;
        int y,is_s_d_num=0;
        vector<int> bit;
        while(x){
            y = x%10;
            x = x/10;
            if(y==0)
                return false;
            bit.push_back(y);
        }
        int len = bit.size();
        for(int i=0;i<len;i++)
            if(n%bit[i])
                return false;
        return true;
    }
};