/* lethead.c --- */


#include<stdio.h>

#define NAME "GIGATHINK,INC."

#define ADDRESS "101 Megabuck Plaza"

#define PALCE "Megapolis .CA 94904"

#define WINTH 40


void StarBar(void);								/* 声明函数原型 */

int main(void)
{
				StarBar();
				printf("%s\n",NAME);
				printf("%s\n",ADDRESS);
				printf("%s\n",PALCE);
				StarBar();

				return 0;

}

/*
 * Function:StarBar
 * --------------------
 *  This function implements printing an asterisk
 */

void  StarBar(void)													//定义函数
{
				int count;

				for (count = 0;count  <= WINTH;count++)
								printf("*");
				putchar('\n');

}


















