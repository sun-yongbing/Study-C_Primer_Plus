/* altname.c -- 可移植的整数类型名  */

#include<stdio.h>
#include<inttypes.h>

int main(void)
{
				int16_t me16;      //me16是一个16位有符号变量

				me16 = 4593;
				printf("Frist assume int16_t is short :");
				printf("me16 = %hd\n",me16);
				printf("Next ,let's not make any assumptions.\n");
				printf("Instead use a \"macro\" from inttypes.h ");
				printf("me16 = %" "hd"" \n",me16);
				return 0;

}
