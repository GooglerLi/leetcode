#include <iostream>
using namespace std;

bool containsDuplicate(int* nums, int numsSize) {
    /*第一种方法*/
    if(numsSize <=0)
    {
        return false;
    }
    
    for(int i =0;i<numsSize;i++)
    {
        for(int j = i+1;j<numsSize;j++)
        {
            if(nums[i] == nums[j])
            {
                return true;
            }
        }
    }
    
    return false;
}


int main()
{
	int nums[5] = {1,2,3};
	cout << containsDuplicate(nums,3) << endl;
}
