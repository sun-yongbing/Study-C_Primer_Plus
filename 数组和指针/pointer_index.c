/* pointer_index.c --- 指针变量 */


#include<stdio.h>

int main(void)
{
				int a[] = {5,8,2,3,9,8,1};
				int y, *p = &a[1];

				printf("%d\n",a[0]);
				y = (* --p)++;
				printf("%d",y);
				printf("%4d\n",a[0]);
				printf("%4d\n",a[1]);
				printf("%4d\n",a[2]);
				printf("%4d\n",a[3]);
				printf("%4d\n",a[4]);

				return 0;

}
