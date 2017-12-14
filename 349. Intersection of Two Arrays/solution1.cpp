class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersection;
        int sign;
        for(auto i=nums1.begin();i<nums1.end();i++){
            for(auto j=nums2.begin();j<nums2.end();j++){
                if(*i==*j){
                    //delete the repeated element
                    //reduce compare times
                    nums2.erase(j);
                    
                    sign = 0;
					//There is not find() in Vector,so we have to accomplish it by myself
                    for(auto k=intersection.begin();k<intersection.end();k++)
                        if(*i==*k){
                            sign = 1;
                            break;
                        }
                    if(sign==0) 
                        intersection.push_back(*i);

                }
            }
        }
        return intersection;
    }
};