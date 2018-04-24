#include<stdio.h>
int main(int argc , char *arhv[])
{
	if(argc != 2)
	{
		printf("USAGE: %s name\n", argv[0]);
		return -1;
	}
	printf("Hello , %s!\n",argv[1]);
	return 0;
}
