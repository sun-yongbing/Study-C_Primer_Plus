/* Betyorder.c ---字节序 */


#include<stdio.h>


int main()
{
				int a = 0x12345678;
				char *b = (char *)&a;
				int i = 0;
				for(;i < 4;i++)
				{
								printf("%x\n",b[i]);
				}

				return 0;

}
