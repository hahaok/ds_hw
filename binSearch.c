Position BinarySearch(List L, ElementType X)
{
	int count = L->Last;
	int a = 1, b = count;
	int posi;
	while(b-a>1)
	{
		if(X > L->Data[count] || X <L->Data[1])
		{
			return NotFound;
		}
		else if(X == L->Data[count])
		{
			return count;
		}
		else if(X == L->Data[1])
		{
			return 1;
		}
		else if(X == L->Data[(b-a)/2])
		{
			posi = (b-a)/2;
			return posi;
		}
		else if(X > L->Data[(b-a)/2])
		{
			a = (b-a)/2;
		}
		else
		{
			b = (b-a)/2+1;
		}
	}
	return NotFound;
}