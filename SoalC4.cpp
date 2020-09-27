#include <stdio.h>
int main(void)
{
	int bil1,bil2,bil3,bil4,bil5,bil6,bil7,bil8,bil9,bil0;
	int a,b,i,j,k,l,tampung1,tampung2,ulang1,ulang2,ulang3,ulang4,ulang5,ulang6,ulang7,ulang8,ulang9;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		tampung1=0;
		tampung2=0;
		bil1=0;
		bil2=0;
		bil3=0;
		bil4=0;
		bil5=0;
		bil6=0;
		bil7=0;
		bil8=0;
		bil9=0;
		bil0=0;
		
		scanf("%d",&b);
		printf("Case #%d:",i);
		if(b>100000 &&b<=200000)
		{
				bil1=50001;
				bil2=50000;
				bil3=50000;
				bil4=50000;
				bil5=50000;
				bil6=50000;
				bil7=50000;
				bil8=50000;
				bil9=50000;
				bil0=38894;				
			for(ulang1=100001;ulang1<=b;ulang1++)
			{
				tampung1=ulang1;
				while(tampung1!=0)
				{
					tampung2=tampung1%10;
					tampung1=tampung1/10;
					if(tampung2%10==1)
					{
						bil1=bil1+1;		
					}
					else if(tampung2%10==2)
					{
						bil2=bil2+1;
					}
					else if(tampung2%10==3)
					{
						bil3=bil3+1;
					}
					else if(tampung2%10==4)
					{
						bil4=bil4+1;
					}
					else if(tampung2%10==5)
					{
						bil5=bil5+1;
					}
					else if(tampung2%10==6)
					{
						bil6=bil6+1;
					}
					else if(tampung2%10==7)
					{
						bil7=bil7+1;
					}
					else if(tampung2%10==8)
					{
						bil8=bil8+1;
					}
					else if(tampung2%10==9)
					{
						bil9=bil9+1;
					}
					else if(tampung2%10==0)
					{
						bil0=bil0+1;			
					}
				}
			}
			printf(" %d %d %d %d %d %d %d %d %d %d\n",bil0,bil1,bil2,bil3,bil4,bil5,bil6,bil7,bil8,bil9);	
		}
		else if(b>200000 &&b<=300000)
		{
				bil1=200000;
				bil2=100001;
				bil3=100000;
				bil4=100000;
				bil5=100000;
				bil6=100000;
				bil7=100000;
				bil8=100000;
				bil9=100000;
				bil0=88894;				
			for(ulang2=200001;ulang2<=b;ulang2++)
			{
				tampung1=ulang2;
				while(tampung1!=0)
				{
					tampung2=tampung1%10;
					tampung1=tampung1/10;
					if(tampung2%10==1)
					{
						bil1=bil1+1;		
					}
					else if(tampung2%10==2)
					{
						bil2=bil2+1;
					}
					else if(tampung2%10==3)
					{
						bil3=bil3+1;
					}
					else if(tampung2%10==4)
					{
						bil4=bil4+1;
					}
					else if(tampung2%10==5)
					{
						bil5=bil5+1;
					}
					else if(tampung2%10==6)
					{
						bil6=bil6+1;
					}
					else if(tampung2%10==7)
					{
						bil7=bil7+1;
					}
					else if(tampung2%10==8)
					{
						bil8=bil8+1;
					}
					else if(tampung2%10==9)
					{
						bil9=bil9+1;
					}
					else if(tampung2%10==0)
					{
						bil0=bil0+1;			
					}
				}
			}
			printf(" %d %d %d %d %d %d %d %d %d %d\n",bil0,bil1,bil2,bil3,bil4,bil5,bil6,bil7,bil8,bil9);	
		}
		else if(b>300000 &&b<=400000)
		{
				bil1=250000;
				bil2=250000;
				bil3=150001;
				bil4=150000;
				bil5=150000;
				bil6=150000;
				bil7=150000;
				bil8=150000;
				bil9=150000;
				bil0=138894;				
			for(ulang3=300001;ulang3<=b;ulang3++)
			{
				tampung1=ulang3;
				while(tampung1!=0)
				{
					tampung2=tampung1%10;
					tampung1=tampung1/10;
					if(tampung2%10==1)
					{
						bil1=bil1+1;		
					}
					else if(tampung2%10==2)
					{
						bil2=bil2+1;
					}
					else if(tampung2%10==3)
					{
						bil3=bil3+1;
					}
					else if(tampung2%10==4)
					{
						bil4=bil4+1;
					}
					else if(tampung2%10==5)
					{
						bil5=bil5+1;
					}
					else if(tampung2%10==6)
					{
						bil6=bil6+1;
					}
					else if(tampung2%10==7)
					{
						bil7=bil7+1;
					}
					else if(tampung2%10==8)
					{
						bil8=bil8+1;
					}
					else if(tampung2%10==9)
					{
						bil9=bil9+1;
					}
					else if(tampung2%10==0)
					{
						bil0=bil0+1;			
					}
				}
			}
			printf(" %d %d %d %d %d %d %d %d %d %d\n",bil0,bil1,bil2,bil3,bil4,bil5,bil6,bil7,bil8,bil9);	
		}
		else if(b>400000 &&b<=500000)
		{
				bil1=300000;
				bil2=300000;
				bil3=300000;
				bil4=200001;
				bil5=200000;
				bil6=200000;
				bil7=200000;
				bil8=200000;
				bil9=200000;
				bil0=188894;				
			for(ulang4=400001;ulang4<=b;ulang4++)
			{
				tampung1=ulang4;
				while(tampung1!=0)
				{
					tampung2=tampung1%10;
					tampung1=tampung1/10;
					if(tampung2%10==1)
					{
						bil1=bil1+1;		
					}
					else if(tampung2%10==2)
					{
						bil2=bil2+1;
					}
					else if(tampung2%10==3)
					{
						bil3=bil3+1;
					}
					else if(tampung2%10==4)
					{
						bil4=bil4+1;
					}
					else if(tampung2%10==5)
					{
						bil5=bil5+1;
					}
					else if(tampung2%10==6)
					{
						bil6=bil6+1;
					}
					else if(tampung2%10==7)
					{
						bil7=bil7+1;
					}
					else if(tampung2%10==8)
					{
						bil8=bil8+1;
					}
					else if(tampung2%10==9)
					{
						bil9=bil9+1;
					}
					else if(tampung2%10==0)
					{
						bil0=bil0+1;			
					}
				}
			}
			printf(" %d %d %d %d %d %d %d %d %d %d\n",bil0,bil1,bil2,bil3,bil4,bil5,bil6,bil7,bil8,bil9);	
		}
		else if(b>500000 &&b<=600000)
		{
				bil1=350000;
				bil2=350000;
				bil3=350000;
				bil4=350000;
				bil5=250001;
				bil6=250000;
				bil7=250000;
				bil8=250000;
				bil9=250000;
				bil0=238894;				
			for(ulang5=500001;ulang5<=b;ulang5++)
			{
				tampung1=ulang5;
				while(tampung1!=0)
				{
					tampung2=tampung1%10;
					tampung1=tampung1/10;
					if(tampung2%10==1)
					{
						bil1=bil1+1;		
					}
					else if(tampung2%10==2)
					{
						bil2=bil2+1;
					}
					else if(tampung2%10==3)
					{
						bil3=bil3+1;
					}
					else if(tampung2%10==4)
					{
						bil4=bil4+1;
					}
					else if(tampung2%10==5)
					{
						bil5=bil5+1;
					}
					else if(tampung2%10==6)
					{
						bil6=bil6+1;
					}
					else if(tampung2%10==7)
					{
						bil7=bil7+1;
					}
					else if(tampung2%10==8)
					{
						bil8=bil8+1;
					}
					else if(tampung2%10==9)
					{
						bil9=bil9+1;
					}
					else if(tampung2%10==0)
					{
						bil0=bil0+1;			
					}
				}
			}
			printf(" %d %d %d %d %d %d %d %d %d %d\n",bil0,bil1,bil2,bil3,bil4,bil5,bil6,bil7,bil8,bil9);	
		}
		else if(b>600000 &&b<=700000)
		{
				bil1=400000;
				bil2=400000;
				bil3=400000;
				bil4=400000;
				bil5=400000;
				bil6=300001;
				bil7=300000;
				bil8=300000;
				bil9=300000;
				bil0=288894;				
			for(ulang6=600001;ulang6<=b;ulang6++)
			{
				tampung1=ulang6;
				while(tampung1!=0)
				{
					tampung2=tampung1%10;
					tampung1=tampung1/10;
					if(tampung2%10==1)
					{
						bil1=bil1+1;		
					}
					else if(tampung2%10==2)
					{
						bil2=bil2+1;
					}
					else if(tampung2%10==3)
					{
						bil3=bil3+1;
					}
					else if(tampung2%10==4)
					{
						bil4=bil4+1;
					}
					else if(tampung2%10==5)
					{
						bil5=bil5+1;
					}
					else if(tampung2%10==6)
					{
						bil6=bil6+1;
					}
					else if(tampung2%10==7)
					{
						bil7=bil7+1;
					}
					else if(tampung2%10==8)
					{
						bil8=bil8+1;
					}
					else if(tampung2%10==9)
					{
						bil9=bil9+1;
					}
					else if(tampung2%10==0)
					{
						bil0=bil0+1;			
					}
				}
			}
			printf(" %d %d %d %d %d %d %d %d %d %d\n",bil0,bil1,bil2,bil3,bil4,bil5,bil6,bil7,bil8,bil9);	
		}
		else if(b>700000 &&b<=800000)
		{
				bil1=450000;
				bil2=450000;
				bil3=450000;
				bil4=450000;
				bil5=450000;
				bil6=450000;
				bil7=350001;
				bil8=350000;
				bil9=350000;
				bil0=338894;				
			for(ulang7=700001;ulang7<=b;ulang7++)
			{
				tampung1=ulang7;
				while(tampung1!=0)
				{
					tampung2=tampung1%10;
					tampung1=tampung1/10;
					if(tampung2%10==1)
					{
						bil1=bil1+1;		
					}
					else if(tampung2%10==2)
					{
						bil2=bil2+1;
					}
					else if(tampung2%10==3)
					{
						bil3=bil3+1;
					}
					else if(tampung2%10==4)
					{
						bil4=bil4+1;
					}
					else if(tampung2%10==5)
					{
						bil5=bil5+1;
					}
					else if(tampung2%10==6)
					{
						bil6=bil6+1;
					}
					else if(tampung2%10==7)
					{
						bil7=bil7+1;
					}
					else if(tampung2%10==8)
					{
						bil8=bil8+1;
					}
					else if(tampung2%10==9)
					{
						bil9=bil9+1;
					}
					else if(tampung2%10==0)
					{
						bil0=bil0+1;			
					}
				}
			}
			printf(" %d %d %d %d %d %d %d %d %d %d\n",bil0,bil1,bil2,bil3,bil4,bil5,bil6,bil7,bil8,bil9);	
		}
		else if(b>800000 &&b<=900000)
		{
				bil1=500000;
				bil2=500000;
				bil3=500000;
				bil4=500000;
				bil5=500000;
				bil6=500000;
				bil7=500000;
				bil8=400001;
				bil9=400000;
				bil0=388894;				
			for(ulang8=800001;ulang8<=b;ulang8++)
			{
				tampung1=ulang8;
				while(tampung1!=0)
				{
					tampung2=tampung1%10;
					tampung1=tampung1/10;
					if(tampung2%10==1)
					{
						bil1=bil1+1;		
					}
					else if(tampung2%10==2)
					{
						bil2=bil2+1;
					}
					else if(tampung2%10==3)
					{
						bil3=bil3+1;
					}
					else if(tampung2%10==4)
					{
						bil4=bil4+1;
					}
					else if(tampung2%10==5)
					{
						bil5=bil5+1;
					}
					else if(tampung2%10==6)
					{
						bil6=bil6+1;
					}
					else if(tampung2%10==7)
					{
						bil7=bil7+1;
					}
					else if(tampung2%10==8)
					{
						bil8=bil8+1;
					}
					else if(tampung2%10==9)
					{
						bil9=bil9+1;
					}
					else if(tampung2%10==0)
					{
						bil0=bil0+1;			
					}
				}
			}
			printf(" %d %d %d %d %d %d %d %d %d %d\n",bil0,bil1,bil2,bil3,bil4,bil5,bil6,bil7,bil8,bil9);	
		}
		else if(b>900000 &&b<=1000000)
		{
				bil1=550000;
				bil2=550000;
				bil3=550000;
				bil4=550000;
				bil5=550000;
				bil6=550000;
				bil7=550000;
				bil8=550000;
				bil9=450001;
				bil0=438894;				
			for(ulang9=900001;ulang9<=b;ulang9++)
			{
				tampung1=ulang9;
				while(tampung1!=0)
				{
					tampung2=tampung1%10;
					tampung1=tampung1/10;
					if(tampung2%10==1)
					{
						bil1=bil1+1;		
					}
					else if(tampung2%10==2)
					{
						bil2=bil2+1;
					}
					else if(tampung2%10==3)
					{
						bil3=bil3+1;
					}
					else if(tampung2%10==4)
					{
						bil4=bil4+1;
					}
					else if(tampung2%10==5)
					{
						bil5=bil5+1;
					}
					else if(tampung2%10==6)
					{
						bil6=bil6+1;
					}
					else if(tampung2%10==7)
					{
						bil7=bil7+1;
					}
					else if(tampung2%10==8)
					{
						bil8=bil8+1;
					}
					else if(tampung2%10==9)
					{
						bil9=bil9+1;
					}
					else if(tampung2%10==0)
					{
						bil0=bil0+1;			
					}
				}
			}
			printf(" %d %d %d %d %d %d %d %d %d %d\n",bil0,bil1,bil2,bil3,bil4,bil5,bil6,bil7,bil8,bil9);	
		}
		else
		{
		for(j=1;j<=b;j++)
		{
			tampung1=j;
			while(tampung1!=0)
			{
				tampung2=tampung1%10;
				tampung1=tampung1/10;
				if(tampung2%10==1)
				{
					bil1=bil1+1;		
				}
				else if(tampung2%10==2)
				{
					bil2=bil2+1;
				}
				else if(tampung2%10==3)
				{
					bil3=bil3+1;
				}
				else if(tampung2%10==4)
				{
					bil4=bil4+1;
				}
				else if(tampung2%10==5)
				{
					bil5=bil5+1;
				}
				else if(tampung2%10==6)
				{
					bil6=bil6+1;
				}
				else if(tampung2%10==7)
				{
					bil7=bil7+1;
				}
				else if(tampung2%10==8)
				{
					bil8=bil8+1;
				}
				else if(tampung2%10==9)
				{
					bil9=bil9+1;
				}
				else if(tampung2%10==0)
				{
					bil0=bil0+1;			
				}
			}
		}
	printf(" %d %d %d %d %d %d %d %d %d %d\n",bil0,bil1,bil2,bil3,bil4,bil5,bil6,bil7,bil8,bil9);
		}
	}
}
