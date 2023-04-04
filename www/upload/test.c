#include "ft_printf.h"
#include<limits.h>
#include<assert.h>
#include "ft_printf.h"

int ft_check(va_list args, char c)
{
	int count;

	count = 0;
	if (c == 'd')
		count = ft_printd(va_arg(args,int));
	return (count);
}
int ft_printf(const char *s, ...)
{
	va_list ptr;
	int i;
	int count;

	count = 0;

	i = 0;
	va_start(ptr,s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			count += ft_check(ptr,s[i]);
		}
		else
			count += ft_putchar(s[i]);
		i++;
	}
	va_end(ptr);
	return (count);
}
int ft_printd(int c)
{
	static int count;
	long	nb ;

	nb = c;
	if (nb < 0)
	{
		ft_putchar('-');
		count++;
		nb = -nb;
	}
	if (nb > 9)
		ft_printd((nb / 10));
	ft_putchar("0123456789"[nb % 10]);
	count++;
	return (count);
}

int main()
{
	// int count = 0;
	printf(" ||| %d\n",ft_printf(" %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
	printf(" ||| %d\n",printf(" %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
	printf("%d\n",LONG_MAX);
}
