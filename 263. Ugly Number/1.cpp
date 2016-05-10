#include <stdio.h>
#include <iostream>

using namespace std;

bool isUgly(int num) 
{
	if(num <= 0)
		return false;
	if(num == 1 || num == 2)
		return true;
    for(int i=2;i<num;i++)
    {
    	if(num%i==0) //i是因子 
    	{
    		for(int j=2;j<i;j++) //判断i是否是质因子 
    		{
    			if(i%j==0 && j!=i)
				{
					;//i不是质数 
				}else
				{   //i是质数 
					if(i==2||i==3||i==5)
    					;
    				else
    					return false;
				}
			}
		}
	}
	
	return true;
}

int main()
{
//	cout << isUgly(6) <<endl;
	cout << isUgly(8) <<endl;
	cout << isUgly(14) <<endl;
}
