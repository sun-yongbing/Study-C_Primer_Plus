/* swap.c 两个值的交换 */


#include<stdio.h>

void swap_pointer(int* a,int* b); 

void swap(int a,int b)
{
				int temp = a;
				a = b;
				b = temp;
				printf("swap :a = %d,b = %d\n",a,b);
}

int main()
{
				int a,b;
				a = 2;
				b = 5;

				printf("before swap :a = %d,b = %d\n",a,b);
				swap(a,b); 
				printf("after swap  :a = %d,b = %d\n",a,b);
				swap_pointer(&a,&b);
				printf("after swap_pointer :a = %d,b = %d\n",a,b);

				return 0;

}

void swap_pointer(int *a, int *b)
{
				 int temp = *a;
				 *a = *b;
				 *b = temp;
}












