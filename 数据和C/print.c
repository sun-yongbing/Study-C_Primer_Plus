/* printf.c -- printf()的更多属性 */

#include<stdio.h>

int main()
{
				unsigned int un = 300000000;
				short end = 200;
				long big = 65537;
				long long verybig = 12345678908642;

				printf("un = %u and not %d\n",un,un);
				printf("end = %hd and %d\n",end,end);
				printf("hig = %ld and not %hd\n",big,big);
				printf("verybig = %lld and bot %ld\n",verybig,verybig);
				
				return 0;
}
