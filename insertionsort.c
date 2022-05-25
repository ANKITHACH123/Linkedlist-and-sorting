#include<stdio.h>
void insertion(int *arr,int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0;j--)
		{
			if(temp>arr[j])
			{
			    arr[j+1]=temp;
				break;	
			}
			else
			{
				arr[j+1]=arr[j];
			}
		}
			if(j==-1)
			{
				arr[0]==temp;
			}
		
		
	}
}
int main()
{
	int i,n,arr[100],j,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);	
	}
	insertion(arr,n);
	for(i=0;i<n;i++)
	{
	printf("%d ",arr[i]);	
	}
}