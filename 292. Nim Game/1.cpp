#include <iostream>
using namespace std;


/*�ҹ��ɷ���4�ı������䣬����4�ı���һ������Ӯ*/
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
