/* toobig.c --超出您系统上的最大int直 */

#include<stdio.h>

int main()
{
				int i = 2147483647;
				unsigned int j = 4294967295;

				printf(" %d %d %d\n",i,i+1,i+2);
				printf(" %u %u %u\n",j,j+1,j+2);

				return 0;
}

