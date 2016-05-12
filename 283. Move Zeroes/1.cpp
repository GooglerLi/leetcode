#include <iostream>
using namespace std;

/*方法一思想：循环遍历整个数组，当元素为零时，将该元素放到数组后面，并且将元素依次往前移一位
当元素不为零时，指针往后移，直到指针位置元素为零*/
/*void moveZeroes(int* nums, int numsSize) {
    
    int count_zero = 0;
    for(int i =0;i<numsSize;i++)
    {
        if(nums[i] == 0)
            count_zero++;
    }
    
    int i = 0;
    int index = 0;
    while(count_zero)
    {
        for(int j=i;i<numsSize;j++)
        {
            if(nums[j] == 0)
            {

				index++;
            	int temp = nums[numsSize - index];
        		nums[numsSize - index] = 0;
        			
        		if(numsSize-index-1>=j)
        		{
        		    for(int k=j;k<numsSize-index-1;k++)
        			{
        				nums[k] = nums[k+1];
				    }
				    nums[numsSize-index-1] = temp;
        		}else
        		{
        			;    
        		}
				
				count_zero--;
				break;
			}else
			{
				i++;
				break;
			}
        }
    }                    
}*/

/*方法二思想：将不为零的数字放到前面，然后将数组后面补零*/
void moveZeroes(int* nums, int numsSize) {
    
    int curr = 0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i] != 0)
        {
            nums[curr] = nums[i];
            curr++;
        }
        
    }
    
    for(int j=curr;j<numsSize;j++)
    {
        nums[j] = 0;
    }
}


int main()
{
	int nums[2] = {1, 0};
	moveZeroes(nums,2);
	
	for(int i=0;i<2;i++)
	{
		cout << nums[i] << " ";
	}
	cout << endl;
}
