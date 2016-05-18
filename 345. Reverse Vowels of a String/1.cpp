#include <stdio.h>

char* reverseVowels(char* s) {
    int len = strlen(s);
    
    int i = 0;
    int j = len-1;
    
    while(i<j)
    {
        while(i<j)
        {
            if(tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u' )
            {
                break;
            }else
            {
                i++;
            }
        }
        
        while(i<j)
        {
            if(tolower(s[j]) == 'a' || tolower(s[j]) == 'e' || tolower(s[j]) == 'i' || tolower(s[j]) == 'o' || tolower(s[j]) == 'u')
            {
                break;
            }else
            {
                j--;
            }
        }
        
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        
        i++;
        j--;
    }

    return s;
}

int main()
{
	
}
