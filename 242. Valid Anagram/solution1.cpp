class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        map<char,int> a;
        int s_len = s.length();
        int t_len = t.length();
        for(int i=0;i<s_len;i++){
            if(a.find(s[i])==a.end())
                a[s[i]] = 1;
            else
                a[s[i]]++;
        }
        for(int i=0;i<t_len;i++){
            //Ѱ��a�������Ƿ��и��ַ�
            if(a.find(t[i])==a.end())
                //a[t[i]] = -1;
                return false;
            else{
                //���s��t��ĳ���ַ����ִ�����ͬ
                if(a[t[i]] == 0)
                    return false;
                a[t[i]]--;
            }

        }

        for(auto iter=a.rbegin();iter!=a.rend();iter++)
            if(iter->second!=0)
                return false;
        return true;

    }
};
