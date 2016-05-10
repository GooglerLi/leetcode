#include <stdio.h>
#include <string.h>

char* reverseString(char* s) 
{
    int length = strlen(s);
    for(int i=0;i<length/2;i++)
    {
    	char temp = s[length-i-1];
    	s[length-i-1] = s[i];
    	s[i] = temp;
	}
	
	s[length] = '\0';
	return s;
}

int main()
{
	char s[1000];
	scanf("%s",s);
	printf("%s \n",reverseString(s));
}
