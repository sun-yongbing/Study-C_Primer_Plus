/* Mult_Array.c --多维数组 */


#include<stdio.h>


int main()
{
				int a[3][6] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
				int *mp;

				mp = &a[3][6];

				printf("%d\n",a[3][6]);
				printf("%d\n",*mp);
				printf("%d\n",*++mp);
				printf("%d\n",*++mp);

				return 0;

}
