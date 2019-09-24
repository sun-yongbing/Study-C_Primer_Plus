/* swap1.c --实现两个值的从大到小的排序 */


#include<stdio.h>

void swap1(int x ,int y);

int main(void)
{
				int a, b;
				
				scanf("%d%d",&a,&b);
				if (a < b)
								swap1(a,b);
				printf("\n%d\n%d\n",a,b);

				return 0;

}

/*
 *function:swap1
 -----------------------
 *This function practice sorting two values by size
 */

void swap1(int x, int y)
{
				int temp;

				temp = x;
				x = y;
				y = temp;

}
