#include <iostream>
using namespace std;


int* twoSum(int* nums, int numsSize, int target) 
{
	int *result = (int *)malloc(2*sizeof(int));
    for(int i=0;i<numsSize-1;i++)
    	for(int j=i+1;j<numsSize;j++)
    	{
    		if(nums[i] + nums[j] == target)
    		{
    			result[0] = i;
    			result[1] = j;
    			
    			return result;
			}
		}
	
	return NULL;
}

int main()
{
	int nums[4] = {0, 4, 3, 0};
	int target = 0;
	
	int *result = twoSum(nums,4,target);
	cout <<*result << " " << *(result+1) << endl;
}
