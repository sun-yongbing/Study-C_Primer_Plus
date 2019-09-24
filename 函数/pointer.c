/* pointer.c --指针举例 */


#include<stdio.h>

int main(void)
{
				int i = 10;
				int *p;
				p = &i;

				printf("i = %d iaddress = %p,p = %d paddress = %p\n",i,&i,*p,&*p);

				return 0;

}

