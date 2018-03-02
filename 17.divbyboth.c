#include <stdio.h>
int main()
{
	int l,r,i=1;
	printf("input\n");
	scanf("%d%d",&l,&r);
	while(i>0)
	{
	if((i%l==0)&&(i%r==0))
	{
		printf("output=%d",i);
		break;
	}
	i++;
	}
	return 0;
}
