#include <stdio.h>

int addDigits(int num) 
{
	int m = num%10;//����
	int n = num/10;//���� 
	
	int sum = 0;
	
    if(n == 0)
    {
    	return m;
	}
    else
    {
    	sum = sum + m;
		while(n!=0)
		{
			num = n;
			m = num%10;//����
			n = num/10;//���� 
			
			sum = sum + m;
		}
		
		if(sum >= 10)
		{
			return addDigits(sum);
		}else
		{
			return sum;
		}
	}
}
int main()
{
	printf("%d \n",addDigits(3589)); 
	return 0;
}
