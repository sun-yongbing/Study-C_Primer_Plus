/* array_poiner.c --数组指针举例 */


#include<stdio.h>

int main(void)
{
				int array[3] = {3,5,8};
				int *p = array;
				int i;

				printf("array'byte %ld\n",sizeof(array));
				printf("array's address %p \n",&array);
				printf("addray[%d] address %p \n",array[0],&array[0]);
				printf("addray[%d] address %p \n",array[1],&array[1]);
				printf("addray[%d] address %p \n",array[2],&array[2]);
				printf("pointer's%d address %p\n",*p,&*p);
				p = p + 1;
				printf("pointer's%d address %p\n",*p,&*p);
				p = p + 1;
				printf("pointer's%d address %p\n",*p,&*p);
				p = p + 1;

				for(i = 0;i < 3;i++)
				{
								printf("array[%d] = %d address = %d\n",i,array[i],*p);
								p++;
				}
				return 0;

}
