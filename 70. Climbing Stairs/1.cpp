#include <iostream>
using namespace std;


/*递归超时*/
/*int climbStairs(int n) {
    if(n==1)
        return 1;
    if(n==2)
        return 2;
        
    if(n >= 3)
        return climbStairs(n-1) + climbStairs(n-2);
}*/

/*从小的迭代*/ 
int climbStairs(int n) {
    if(n<=0)
        return 0;
	if(n==1)
        return 1;
    if(n==2)
        return 2;
    
    int prev2 = 1; //前两个f(n-2) 
    int prev1 = 2; //前一个f(n-1) 
    int curr = 0;
    for(int i = 3;i<=n;i++)
    {
    	curr = prev1 + prev2;
    	
    	int temp = prev1;
    	prev1 = curr;
    	prev2 = temp;
	}
	
	return curr;
}

int main()
{
	cout << climbStairs(3)<<endl;
	cout << climbStairs(4)<<endl;
	cout << climbStairs(5)<<endl;
}
