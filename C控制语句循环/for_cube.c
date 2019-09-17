/* for_cube.c -- 使用一个for循环打印一个立方表 */


#include<stdio.h>

int main(void)
{
				int n;

				printf("    n    ncubed\n");
				for(n = 0;n <= 6;n++)
								printf("%5d %5d\n",n,n*n*n);
			
				return 0;

}
