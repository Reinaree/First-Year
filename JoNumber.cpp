#include <stdio.h>






void jonumber()
{
	long long num[1000]={7,8,77,78,87,88,777,778,787,788,877,878,887,888,7777,7778,7787,7788,7877,7878,7887,7888,8777,8778,8787,8788,8877,8878,8887,8888,77777,77778,77787,77788,77877,77878,77887,77888,78777,78778,78787,78788,78877,78878,78887,78888,87777,87778,87787,87788,87877,87878,87887,87888,88777,88778,88787,88788,88877,88878,88887,88888,777777,777778,777787,777788,777877,777878,777887,777888,778777,778778,778787,778788,778877,778878,778887,778888,787777,787778,787787,787788,787877,787878,787887,787888,788777,788778,788787,788788,788877,788878,788887,788888,877777,877778,877787,877788,877877,877878,877887,877888,878777,878778,878787,878788,878877,878878,878887,878888,887777,887778,887787,887788,887877,887878,887887,887888,888777,888778,888787,888788,888877,888878,888887,888888,7777777,7777778,7777787,7777788,7777877,7777878,7777887,7777888,7778777,7778778,7778787,7778788,7778877,7778878,7778887,7778888,7787777,7787778,7787787,7787788,7787877,7787878,7787887,7787888,7788777,7788778,7788787,7788788,7788877,7788878,7788887,7788888,7877777,7877778,7877787,7877788,7877877,7877878,7877887,7877888,7878777,7878778,7878787,7878788,7878877,7878878,7878887,7878888,7887777,7887778,7887787,7887788,7887877,7887878,7887887,7887888,7888777,7888778,7888787,7888788,7888877,7888878,7888887,7888888,8777777,8777778,8777787,8777788,8777877,8777878,8777887,8777888,8778777,8778778,8778787,8778788,8778877,8778878,8778887,8778888,8787777,8787778,8787787,8787788,8787877,8787878,8787887,8787888,8788777,8788778,8788787,8788788,8788877,8788878,8788887,8788888,8877777,8877778,8877787,8877788,8877877,8877878,8877887,8877888,8878777,8878778,8878787,8878788,8878877,8878878,8878887,8878888,8887777,8887778,8887787,8887788,8887877,8887878,8887887,8887888,8888777,8888778,8888787,8888788,8888877,8888878,8888887,8888888,77777777,77777778,77777787,77777788,77777877,77777878,77777887,77777888,77778777,77778778,77778787,77778788,77778877,77778878,77778887,77778888,77787777,77787778,77787787,77787788,77787877,77787878,77787887,77787888,77788777,77788778,77788787,77788788,77788877,77788878,77788887,77788888,77877777,77877778,77877787,77877788,77877877,77877878,77877887,77877888,77878777,77878778,77878787,77878788,77878877,77878878,77878887,77878888,77887777,77887778,77887787,77887788,77887877,77887878,77887887,77887888,77888777,77888778,77888787,77888788,77888877,77888878,77888887,77888888,78777777,78777778,78777787,78777788,78777877,78777878,78777887,78777888,78778777,78778778,78778787,78778788,78778877,78778878,787788};
	int a,b;
	int temp=0;
	scanf("%d",&a);
	for(int i=1; i<=a; i++)
	{
		scanf("%d",&b);
		for(int j=0; j<=1000; j++)
		{
			if(b%num[j]==0)
			{
				temp=1;
				break;	
			}	
		}
		if(temp==1)
		{
			printf("Case #%d: YES\n",i);
		}
		else
		{
			printf("Case #%d: NO\n",i);
		}
	}
}

int main()
{
	jonumber();
	return 0;
}
