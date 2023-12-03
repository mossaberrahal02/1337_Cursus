#include "ft_printf.h"

int main()
{
	int len = ft_printf("hello there how are you %s\n", "hadchi zayed");
	ft_printf("len=> %d\n", len);
	return 0;
}
