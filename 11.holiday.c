#include <stdio.h>
int main()
{
    char s[20];
    printf("input\n");
    scanf("%s",s);
    if(s[0]=='s'||s[0]=='S')
    printf("yes");
    else
    printf("no");
	return 0;
}
