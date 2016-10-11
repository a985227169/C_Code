/*
description: how to seprate 4 byte hex var each 4 bit .
             and store it with a 1 byte char buf.
    demand:lib function forbiden.         
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
	unsigned int x = 0x1f322432;
//	printf("%x\n",x);
	unsigned char tmp[8] = {0};
	int i;
  //convert.
	for(i = 8;i>0;i--)
	{
			tmp[8-i] = (x >> (4*(i-1)));
			tmp[8-i] &= 0x0f;
	}
  //print char buf.
	for(i = 0;i<8;i++)
	{
		printf("%x\n",tmp[i]);
	}	
	return 0;
}
