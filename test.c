#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int lengthOfLongestSubstring(char *s);
int main()
{
    char *str = "bbbb";
    
    printf("%d \n",lengthOfLongestSubstring(str) );
}

int lengthOfLongestSubstring(char *s)
{
    char *address[128]={NULL};
    int len=0;
    char *tmp,*start=s;
    while(*start)
    {
        tmp=address[*start];
        address[*start]=start;
        if(tmp>=s)
        {
            len=len>start-s?len:start-s;
            s=tmp+1;
        }
        start++;
    }
    puts(address);
    len=len>start-s?len:start-s;
    return len;   
}
