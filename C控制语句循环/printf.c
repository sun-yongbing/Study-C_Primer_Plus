/* printf.c --打印图案 */


#include<stdio.h>

#define ROW 5

#define LINE 5

#define SYMBOL "$"

int main(void)
{
				int row;
				int line;

				for(row = 0;row < ROW;row++)
				{
								for(line = 0;line < LINE;line++)
												printf("%s",SYMBOL);
								printf("\n");
				}
				return 0;

}


