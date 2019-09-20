/* factor.c --使用循环和递归计算阶乘 */


#include<stdio.h>

long fact(int n);

long rfact(int n);

int main(void)
{
				int num ;

				printf("This program calculate factorals.\n");
				printf("Enter a value in the range 0-12 (q to quit):\n");
				while(scanf("%d",&num) == 1)
				{
								if (num < 0)
												printf("No negative numbers .please\n");
								else if (num > 12)
												printf("Keep input under 13\n");
								else
								{
												printf("lope:%d factorial = %ld\n",num,fact(num));
												printf("returnsion :%d factorial = %ld\n",num,rfact(num));
								}
								printf("Enter a value in the range 0-12(q to quit):\n");
				}
				printf("Bye .\n");

				return 0;

}

/*
 *function:fact
 *usage: *= n
 ------------------------
 *This function to use the loop to calculate the 
 *hierarchy
 */

long fact(int n)				//use the loop
{
				long ans ;

				for (ans = 1;n > 1;n--)
								ans *= n;
				
				return ans;

}

/*
 *function:rfact
 *usage:ans = n * rfact(n - 1）
 ---------------------------------------
 *This function use the recursion to calculate the  
 *hierarchy.
 */

long rfact(int n)				//use the recursion
{
				long ans;

				if (n > 0)
								ans = n * rfact(n - 1);
				else
								ans = 1;

				return ans;

}





