#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
/*第一种方法*/
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> int_map;
        for(int i =0;i<nums.size();i++)
		{
			if(int_map.find(nums[i])!=int_map.end())
        	{
        		return true;
			}
				
			int_map.insert(pair<int,int>(nums[i],i));
		}
		
		return false;
    }
};

int main()
{
	vector<int> vc;
	vc.push_back(1);
	vc.push_back(2);
	vc.push_back(4);
	vc.push_back(2);
	
//	vector<int> vc_temp = &vc;
	Solution su;
	cout << su.containsDuplicate(vc)<<endl;
}
