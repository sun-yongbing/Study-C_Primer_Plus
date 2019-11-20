/* pointer_pass.c  --传指针 */


#include<stdio.h>

#include<stdlib.h>


void getMenery(int  **p)
{
				/* 申请1024个int大小 */
				*p = malloc(sizeof(int)*1024);
				if (*p == NULL)
				{
								printf("malloc failed\n");
								*p = NULL;
				}
}

int main()
{
				int *p = NULL;
				getMenery(&p);
				printf("address of p is %p\n",p);
				printf("Next is %p\n",(p + 1));

				return 0;
}

