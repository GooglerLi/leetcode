#include <stdio.h>
#include <iostream>
#include <unordered_set>

using namespace std;

/*
bool isHappy(int n) 
 {
     if (n < 1)
        return false;
    if (n == 1)
        return true;
        
	unordered_set<int> visted_set;
	visted_set.insert(n);
	
    
    
	while(true)
	{
	    int sum_equal = 0;
	    while(n)
	    {
		    int x1 = n%10;
		    sum_equal = sum_equal + x1*x1;
    	    n = n/10;
	    }
	
	    if(sum_equal == 1)
	    {
		    return true;
	    }else
	    {
		    if(visted_set.find(sum_equal) != visted_set.end())
			    return false;
		    visted_set.insert(sum_equal);
		    n = sum_equal;
	    }
	}
 }*/

bool isHappy(int n) 
{
    if (n < 1)
        return false;
    if (n == 1)
        return true;
        
	unordered_set<int> visted_set;
	visted_set.insert(n);
	

	int sum_equal = 0;
	while(n)
	{
		int x1 = n%10;
		sum_equal = sum_equal + x1*x1;
    	n = n/10;
	}
	
	if(sum_equal == 1)
	{
		return true;
	}else
	{
		if(visted_set.find(sum_equal) != visted_set.end())
			return false;
	//	visted_set.insert(sum_equal);
	//	n = sum_equal;
	
		return isHappy(sum_equal);
	}
}
 
 
int main()
{
	cout << isHappy(18) << endl;
}
