#include <stdio.h>

void	ft_takes_place(int hour)
{
	int x;
	int y;

	x = hour;
	y = hour + 1;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if ((hour > 0) && (hour < 11))
		printf("%d.00 A.M. AND %d.00 A.M.\n", x, y);
	else if ((hour > 12) && (hour < 23))
		printf("%d.00 P.M. AND %d.00 P.M.\n", x - 12, y - 12);
	else if ((hour == 24) || (hour == 0))
		printf("12.00 A.M. AND 1.00 A.M.\n");
	else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 12)
		printf("12.00 P.M. AND 1.00 P.M.\n");
	else if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
}
