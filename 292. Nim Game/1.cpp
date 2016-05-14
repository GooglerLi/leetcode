#include <iostream>
using namespace std;


/*找规律发现4的倍数必输，不是4的倍数一定可以赢*/
class Solution {
public:
    bool canWinNim(int n) {
        if(n%4==0)
            return false;
        else
            return true;
    }
};

int main()
{
	Solution su; 
	int n = 255;
	cout << su.canWinNim(n) << endl;
}
