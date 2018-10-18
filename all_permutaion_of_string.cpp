void swap(char* a, char* b)
{
	char t = *a;
	*a=*b;
	*b=t;
}

void permutate(char* A, int L, int R)
{
	if(L == R)
		printf("%s\n",A);
	else
	{
		for(int i=L;i<=R;i++)
		{
			swap(A+L,A+i);
			permutate(A,L+1,R);
			swap(A+L,A+i);	
		}
	}
}



int main()
{
	char A[]="abc";
	int n = strlen(A);
	permutate(A,0,n-1);
	return 0;
}
