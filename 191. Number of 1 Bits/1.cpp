#include <iostream>
#include <stdint.h>
using namespace std;

int hammingWeight(uint32_t n) 
{
    int count = 0;
    while(n!=0)
    {
    	count++;
    	n = n&(n-1);
	}
	
	return count;
}
int main()
{
	cout << hammingWeight(11) << endl;
}
