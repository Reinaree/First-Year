#include<stdio.h>
void qsort(int arr[],int first,int last)
{
	int i,j,pivot,temp;
	if(first<last)
	{
		i=first;
		j=last;
		pivot=first;
		while(i<j)
		{
			while(arr[i]<=arr[pivot]&&i<last)
			{
				i++;
			}
			while(arr[j]>arr[pivot])
			{
				j--;
			}
			if(i<j)
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		temp=arr[pivot];
		arr[pivot]=arr[j];
		arr[j]=temp;
		qsort(arr,first,j-1);
		qsort(arr,j+1,last);
	}
}

void merge(int data[],int temp[],int left,int mid,int right)
{
	int temppos,num,leftend;
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
	for(int i=0; i<=num;i++)
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
		mid=(right+left)/2;
		msort(data,temp,left,mid);
		msort(data,temp,mid+1,right);
		merge(data,temp,left,mid+1,right);
	}
}

int main()
{
	int data[100000],temp[100000],a,b,c,d,e,search,awal,akhir,tengah;
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		scanf("%d",&data[i]);
	}
//	msort(data,temp,0,a-1);
//	qsort(data,0,a-1);
	for(int i=0;i<a;i++)
	{
		printf("%d ",data[i]);
	}
	printf("CARI : ");
	scanf("%d",&search);
	awal=0;
	akhir=a-1;
	tengah=(awal+akhir)/2;
	while(awal<=akhir)
	{
		if(data[tengah]<search)
		{
			awal = tengah +1;
		}
		else if(data[tengah]==search)
		{
			printf("ketemu\n");
			break;
		}
		else
		{
			akhir = tengah -1;
		}
		tengah = (awal+akhir)/2;
	}
	if(awal>akhir)
	{
		printf("tidak ketemu\n");
	}
}
