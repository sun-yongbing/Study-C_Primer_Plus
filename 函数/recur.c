/* recur.c ---递归举例 */


#include<stdio.h>

void upAndShow(int);

int main(void)
{
				upAndShow(1);
				
				return 0;

}

/*
 * function:upAndShow
 *usage:t = upAndShow(n+1)
 ---------------------------------
 *This function return a variable value 
 *and location
 */

void upAndShow(int n)
{
				printf("Level %d :n location %p\n",n,&n);
				if (n < 4)
								upAndShow(n + 1);
				printf("LEVEL %d :n location %p\n",n,&n);

}
