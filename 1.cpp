#include <iostream>
#include <vector>
using namespace std;

//url:https://leetcode.com/problems/two-sum/description/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
            for(int j=i+1;j<nums.size();j++){
				if(nums[i]+nums[j]==target)
                    return vector<int>{i,j};
            }

    }
};


// Unit Test
int main()
{
    Solution s;
    vector<int> A{3,2,4};
    auto tmp = s.twoSum(A,6);

	cout<<tmp[0]<<" "<<tmp[1]<<endl;

	return 0;
}
