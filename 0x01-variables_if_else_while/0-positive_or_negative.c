#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes ithere */

/* betty style doc for function main goes there */
/*checks if int n is positive, negative aor equal to zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* is positive */
 	if (n > 0)
		printf("%d is positive\n", n);

	/* is equal to zero */
	else if (n == 0)
		printf("%d is zero\n", n);

	/*is negative */
	else
		printf("%d is negative\n", n);	




	return (0);
}
