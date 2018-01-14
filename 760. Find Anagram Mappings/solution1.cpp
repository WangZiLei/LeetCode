class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        vector<int> res;
        int a_len=A.size(),b_len=B.size();
        for(int i=0;i<a_len;i++)
            for(int j=0;j<b_len;j++)
                if(A[i] == B[j]){
                    res.push_back(j);
                    break;
                }    
        return res;
    }
};