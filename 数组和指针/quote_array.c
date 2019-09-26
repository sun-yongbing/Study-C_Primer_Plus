/* quote_array.c --数组元素的引用 */


#include<stdio.h>

int main(void)
{
				int a[5] , *pa,i;

				for(i = 0;i < 5;i++)						//为数组元素赋值
								a[i] = i + 1;
				pa = a;
				for(i = 0;i < 5;i++)
								printf("*(pa +%d):%d\t",i,*(pa + i));
				printf("\n");
				for(i = 0;i < 5;i++)
								printf("*(a +%d):%d\t",i,*(a + i));
				printf("\n");
				for(i = 0;i < 5;i++)
								printf("*pa[%d]):%d\t",i,pa[i]);
				printf("\n");
				for(i = 0;i < 5;i++)
								printf("*a[%d]):%d\t",i,a[i]);
				printf("\n");


				return 0;

}


