/* addemup.c --4种类型的语句 */


#include<stdio.h>

int main(void)
{
				int count , sum;
				count = 0;
				sum = 0;

				while( count < 21)
				{
								count++;
								sum = count +sum;

				}
				printf("sum = %d\n",sum);

				return 0;
}
