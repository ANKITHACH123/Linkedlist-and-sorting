#include<stdio.h>
int max(int *arr,int n)
{
	int i,ind=0,maxi=arr[0];
	for(i=0;i<=n;i++)
	{
		if(arr[i]>maxi)
		{
			maxi=arr[i];
			ind=i;
		}
	}
	return ind;
}
void selectionsort(int *arr,int n)
{
	int i,temp,maxi;
	for(i=n-1;i>=0;i--)
	{
		maxi=max(arr,i);
		temp=arr[i];
		arr[i]=arr[maxi];
		arr[maxi]=temp;
		
	}	
}
int main()
{
	int i,n,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selectionsort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
}