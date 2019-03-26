#include <stdio.h>

typedef struct $
{
	int num;
	int start;
	int end;
}block;


int main()
{
	int cnt;
	scanf("%d",&cnt);
	int seq[cnt];
	block a,b;
	for(int i = 0;i < cnt;i++)
	{
		scanf("%d",&seq[i]);
	}
	a.start = seq[0];
	b.start = a.start;
	for(int i = 0;i < cnt;i++)
	{
		a.num+=seq[i];
		if(a.num > b.num)
		{
			b.num = a.num;
			a.end = seq[i];
			if(a.start != b.start)
			{
				b.start = a.start;
				b.end = a.end;
			}
			
		}
		else if(a.num < 0)
		{
			a.num = 0;
			a.start = seq[i+1];
		}
	}

	printf("%d %d %d",b.num,b.start,b.end);
	return 0;
}