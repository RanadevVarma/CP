#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[101];
    scanf("%s",str);
    int len=strlen(str);
    int small=0,cap=0;
    for(int i=0;i<len;++i)
        if(str[i]>='a' && str[i]<='z')
            ++small;
        else
            ++cap;
    if(cap>small)
        for(int i=0;i<len;++i)
            putchar(toupper(str[i]));
    else
        for(int i=0;i<len;++i)
            putchar(tolower(str[i]));
    return 0;
}