Position BinarySearch(List L,ElementType X)
{
	int cnt = L->Last;
	int a = 0,b = cnt+1;
	if(X == L->Data[1])
	{
		return 1;
	}
	else if(X == L->Data[cnt])
	{
		return cnt;
	}
	else if(X > L->Data[cnt] || X < L->Data[1])
	{
		return NotFound;
	}
	else
	{
		while(b-a>1)
		{
			if(X > L->Data[(b+a)/2])
			{
				a = (b-a)/2;
			}
			else if(X < L->Data[(b+a)/2])
			{
				b = (b-a)/2;
			}
			else if(X == L->Data[(b+a)/2]){
				return (b+a)/2;
			}
		}
		return NotFound;
	}
}