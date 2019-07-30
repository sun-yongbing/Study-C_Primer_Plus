/* rthdium.c --用金属铑衡量你的体重 */
#include<stdio.h>

int main()
{
				float weight;
				float value;
				printf(" Are you worch you weight in rhodium?\n");
				printf(" let's check it out .\n");
				printf(" Pleace enter your weight in Pounds: ");

				/* 从用户处获取输入 */

				scanf("%f",&weight);
				
				/* 设每铑为每盎司770美元 */
				/* 14.5833把常衡制的英磅转换为金衡制的盎司 */

				value = 770 * weight * 14.5833;
				printf(" Your weight in rhodium is worth $%.2f .\n",value);
				printf(" You are easily worth that !If rhodium prices drop .\n");
				printf(" Eat more to thodium you value .\n");

				return 0;


}

