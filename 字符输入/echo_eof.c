/* echo_eof,c ---重复输入，直到文件案的结尾 */


#include<stdio.h>

int main(void)
{
				int ch;

				while( (ch = getchar() != '\n' ))
								putchar(ch);

				return 0;

}

