#include <iostream>
using namespace std;

class Solution {
public:
/*    bool isPowerOfTwo(int n) {
      if(n<1)
        return false;
      if(n==1)
        return true;
      if(n%2!=0)
        return false;
      else
        return isPowerOfTwo(n/2);
    }*/
    
    /*bool isPowerOfTwo(int n) {
    	if(n<1)
        	return false;
      	if(n==1)
        	return true;
    	while(n%2==0)
    	{
    		n = n/2;
		}
		
		if(n==1)
			return true;
		return false;
    }*/
    
 /*   bool isPowerOfTwo(int n) 
	{
        int cnt = 0;
        while (n > 0) {
            cnt += (n & 1);
            n >>= 1;
    }*/
    
    bool isPowerOfTwo(int n) {
        return (n > 0) && (!(n & (n - 1)));
    } 
};

int main()
{
	Solution su;
	cout << su.isPowerOfTwo(-90) << endl;	
	cout << su.isPowerOfTwo(1) << endl;
	cout << su.isPowerOfTwo(2) << endl;
	cout << su.isPowerOfTwo(1024) << endl;
	cout << su.isPowerOfTwo(9875642) << endl;
}
