#include<stdio.h>
#include<stdlib.h>

typedef struct _pt {
	int a[5];
}PT;

void copy(PT *pt) {
	PT * tmp = (PT*)malloc(sizeof(PT));
	*tmp = *pt;
	printf("tmp array:\n");
	for(int i=0;i<5;i++)
		printf("\ta[%d]=%d\n",i,tmp->a[i]);

	for(int i=0;i<5;i++)
		tmp->a[i] = 5-i;

	printf("after modify tmp array:\n");
	for(int i=0;i<5;i++)
		printf("\ta[%d]=%d\n",i,tmp->a[i]);
	return;
}
int main()
{
	PT *pt = (PT*)malloc(sizeof(PT));
	for(int i=0;i<5;i++)
		pt->a[i] = i;

	printf("pt array:\n");
	for(int i = 0;i < 5;i++)
		printf("\ta[%d]=%d\n",i,pt->a[i]);

	copy(pt);

	printf("After modify pt array:\n");

	for(int i = 0;i < 5;i++)
		printf("\ta[%d]=%d\n",i,pt->a[i]);

	return 0;
}
