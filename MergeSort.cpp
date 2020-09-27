#include<stdio.h>
void merge(int data[],int temp[],int left,int mid, int right)
{
	int leftend,num,temppos;
	leftend=mid-1;
	num=right-left+1;
	temppos=left;
	while((left<=leftend)&&(mid<=right))
	{
		if(data[left]<=data[mid])
		{
			temp[temppos]=data[left];
			left++;
			temppos++;
		}
		else
		{
			temp[temppos]=data[mid];
			mid++;
			temppos++;
		}
	}
	while(left<=leftend)
	{
		temp[temppos]=data[left];
		left++;
		temppos++;
	}
	while(mid<=right)
	{
		temp[temppos]=data[mid];
		mid++;
		temppos++;
	}
	for(int i=0;i<=num;i++)
	{
		data[right]=temp[right];
		right--;
	}
}

void msort(int data[],int temp[],int left,int right)
{
	int mid;
	if(right>left)
	{
		mid=(left+right)/2;
		msort(data,temp,left,mid);
		msort(data,temp,mid+1,right);
		merge(data,temp,left,mid+1,right);
	}
}

int main()
{
	int data[100000],temp[100000],a,b,c,d;
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		scanf("%d",&data[i]);
	}
	msort(data,temp,0,a-1);
	for(int i=0;i<a;i++)
	{
		printf("%d ",data[i]);
	}
}
