#include<stdio.h>
main()
{
	int num,i,val=0,sum=0;
	scanf("%d",&num);
	int arr[num-1];
	for(i=0;i<(num-1);i++)
		scanf("%d",&arr[i]);
	int min=1000000,min1;
	for(i=0;i<(num-1);i++)
		if(arr[i]<min) min=arr[i];
	for(i=min;i<(min+(num));i++) val=val+i;
	for(i=0;i<num-1;i++)
		sum=sum+arr[i];
	printf("%d\n",(val-sum));
	return 0;
}
