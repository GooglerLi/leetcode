#include <iostream>
#include <algorithm>  
#include <string.h>
using namespace std;

class Solution {
public:
    
	/*第一种方法,hash*/
    /*bool isAnagram(char* s, char* t) 
    {
    if(strlen(s) != strlen(t))
    	return false;
    
    int bitset[26] = {0};
    int len = strlen(s);
    for(int i=0;i<len;i++)
    {
    	int temp = s[i] - 'a';
    	bitset[temp]++;
	}
    
    for(int i=0;i<len;i++)
    {
    	int temp = t[i] - 'a';
    	bitset[temp]--;
	}
    
    for(int i=0;i<26;i++)
    {
    	if(bitset[i] == 0)
    		continue;
    	else
    		return false;
	}
    return true;
    }*/
    
    
     /*第二种方法,将字符串排序，然后对字符一一比较*/
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        char *char_s = const_cast<char *>(s.c_str());
        char *char_t = const_cast<char *>(t.c_str());
        sort(char_s,char_s+s.size());
        sort(char_t,char_t+t.size());
        
        if(!strcmp(char_s,char_t))
        	return true;
        else
        	return false;
    }
};

int main()
{
	char *str1 = "hello";
	char *str2 = "hhlll";
	
	Solution su;
	cout << su.isAnagram(str1,str2) << endl;
}
