#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int	main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d, if the %d is greater than 0: is positive\n", n);
	if (n == 0)
		printf("%d, if %d is 0: is zero\n", n);
	if (n < 0)
		printf("%d, if %d is less than 0: is nagative\n", n);
	return (0);
}
