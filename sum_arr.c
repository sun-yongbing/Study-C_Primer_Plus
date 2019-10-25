/* sum_arr.c ---对一个数组的所有元素求和 */


#include<stdio.h>

#define SIZE 10

int sump(int *start, int *end);

int main(void)
{
				int marbles[SIZE] = {10,5,6,9,7,1,2,3,25,66};
				long answer;

				answer = sump(marbles,marbles + SIZE);
				printf("the total numble of marbles is %ld.\n",answer);

				return 0;

}


/* 使用指针算术 */


/*Function:
 * Usage:sump = sump(marbles,*start,*end)
 -------------------------------------------------
 *This function is the total numble of array
 */
 
 
int sump(int *start,int *end)
{
				int total = 0;

				while(start < end)
				{
								total += *start;								/*把值累计到total上 */
								start++;

				}
				return total;

}


















