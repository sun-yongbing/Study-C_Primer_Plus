/* bases.c --以十进制，八进制和十六进制形式输出 */

#include<stdio.h>

int main()
{
				int x = 100;
				printf(" dec = %d : octal = %o : hex = %x \n",x,x,x);
/* 
			  如果想使用C语言前缀，可以使用说明符%#O,%#x和%#X分别生成0，0x，0X前缀
*/
				printf(" dec = %d ：octal = %#o :hex = %#x \n",x,x,x);

				return 0;

}
