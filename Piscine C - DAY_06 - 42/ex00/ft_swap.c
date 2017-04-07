void	ft_swap(int *a, int *b)
{
	int ptra;
	int ptrb;

	ptra = *a;
	ptrb = *b;
	*a = ptrb;
	*b = ptra;
}
