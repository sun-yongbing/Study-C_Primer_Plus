// talkback.c --一个能为你提供一些信息的对话程序


#include<stdio.h>

#include<string.h>		// 提供strlen()函数的原型

#define DENSITY 62.4	// 人的密度（单位是：英镑/每立方英尺）

int main()
{
				float weight,volume;
				int size,letters;
				char name[40];	// name 是一个有40个字符的数组

				printf("Hi,What's your frist name?\n");
				scanf("%s",&name);
				printf("%s,what's your weight in pounds?\n",name);
				scanf("%f",&weight);
				size = sizeof name;
				letters = strlen (name);
				volume = weight / DENSITY;
				printf("Well ,%s,your volume is %2.2f cubic feet . \n",name,volume);
				printf("Also, your frist name has %d letters. \n",letters);
				printf("and we have %d bytes to store it in.\n",size);
				return 0;
}

