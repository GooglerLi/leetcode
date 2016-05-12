#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int titleToNumber(char* s) 
{
	int result = 0;
    int len = strlen(s);
    
    for(int i =0;i<len;i++)
    {
    	result = result + (s[i] - 'A' + 1)*pow(26,len-i-1);
	}
	
	return result;
} 

int main()
{
	char *s1 = "A";
	char *s2 = "AB";
	char *s3 = "AC";
	char *s4 = "BA";
	
	cout << titleToNumber(s1) << endl;
	cout << titleToNumber(s2) << endl;
	cout << titleToNumber(s3) << endl;
	cout << titleToNumber(s4) << endl;
}
