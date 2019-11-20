#include<stdio.h>

#define LEN 10

int main()
{
				int  array[LEN] = {2,6,5,1,3,7,9,8,4,0};
				int  *ap = array + 2;

				printf("this is initially array\n");
				for(int i = 0;i < LEN ;i++)
								printf("%d ",array[i]);

				
				printf("\n");
				printf("this is the frist element of the pointer:\n");
				printf("*ap = [%d]\n",*ap);

				printf("*ap + 6 = [%d]\n",*ap + 6);
				printf("ap[0] = [%d]\n",*(ap+(0)));
				printf("*(ap + 6 ) = [%d]\n",*(ap+6));
				printf("ap[-1] = [%d]\n",ap[-1]);
				printf("2[array] 是合法的，它相当于*（2 + （array））\n");
			  printf("2[array] = %d\n",2[array]);
				printf("*(2 + (array)) = [%d]\n",*(2 + (array)));				



				printf("\n");


				return 0;

}

