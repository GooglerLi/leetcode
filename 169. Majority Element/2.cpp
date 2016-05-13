#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
    
	sort(nums.begin(),nums.end());
    return nums[nums.size()/2];
}
};


int main()
{
	vector<int> vc;
	vc.push_back(1);
	vc.push_back(3);
	vc.push_back(3);
	vc.push_back(3);
	
	Solution su;
	cout << su.majorityElement(vc)<<endl;
}
