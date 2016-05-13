#include <iostream>
using namespace std;

/*������������ʱ�����׳�ʱ*/
int majorityElement(int* nums, int numsSize) {
    
    int count[numsSize];
    for(int i=0;i<numsSize;i++)
    {
        count[i] = 1;
    }
    
    for(int i = 0;i<numsSize;i++)
        for(int j = i+1;j<numsSize;j++)
        {
            if(nums[i] == nums[j])
                count[i]++;
                
            if(count[i] > numsSize/2)
                return nums[i];
        }
        
    return 0;
}
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
