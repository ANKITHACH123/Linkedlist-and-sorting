#include<stdio.h>
void bubblesort(int *arr,int n)
{
	int p,i,temp,sc,j;
	for(p=1;p<=n;p++)
	{
		sc=0;
	    for(i=0,j=1;j<n-p+1;i++,j++)
		{
		    if(arr[i]>arr[j])
			{
				sc++;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
				
		}
		printf("hi\n");
		if(sc==0)
		{
			break;
		}	
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
	bubblesort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}