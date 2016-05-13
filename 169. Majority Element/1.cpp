#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
    
    map<int,int> int_map;
    map<int,int>::iterator it;
    for(int i=0;i<nums.size();i++)
    {
        if(int_map.find(nums[i])!=int_map.end())
        {
            int_map[nums[i]] = int_map[nums[i]] + 1;
        }else
        {
            int_map.insert(pair<int,int>(nums[i],1));
        }
    }
    
    for(it=int_map.begin();it!=int_map.end();it++)
    {
        if(it->second > nums.size()/2)
        {
            return it->first;
        }
    }
    
    return 0;
}
};


int main()
{
	vector<int> vc;
	vc.push_back(1);
	vc.push_back(3);
	vc.push_back(3);
	vc.push_back(3);
	
//	vector<int> vc_temp = &vc;
	Solution su;
	cout << su.majorityElement(vc)<<endl;
}
