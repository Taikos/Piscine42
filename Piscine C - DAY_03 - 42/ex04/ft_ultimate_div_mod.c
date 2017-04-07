void	ft_ultimate_div_mod(int *a, int *b)
{
	int ptra;
	int ptrb;

	ptra = *a;
	ptrb = *b;
	*a = (*a / *b);
	*b = (ptra % ptrb);
}
