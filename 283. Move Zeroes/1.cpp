#include <iostream>
using namespace std;

/*����һ˼�룺ѭ�������������飬��Ԫ��Ϊ��ʱ������Ԫ�طŵ�������棬���ҽ�Ԫ��������ǰ��һλ
��Ԫ�ز�Ϊ��ʱ��ָ�������ƣ�ֱ��ָ��λ��Ԫ��Ϊ��*/
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

/*������˼�룺����Ϊ������ַŵ�ǰ�棬Ȼ��������油��*/
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
