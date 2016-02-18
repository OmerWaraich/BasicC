#include <stdio.h>

int main()
{
	double subtotal;
	double tax;
	double grandtotal;
	double taxrate;

	taxrate = 0.175;
	subtotal = 200;
	tax = subtotal * taxrate;
	grandtotal = subtotal + tax ;

	printf(" Tax on a product of %.2f is %.2f, grandtotal will be %.2f \n", subtotal, tax, grandtotal );
	return 0;
}