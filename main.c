#include <limits.h>
#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	printf("\n===== CHAR =====\n");
	ft_printf("ft_printf: %c\n", 'A');
	printf("printf:    %c\n", 'A');

	printf("\n===== STRING =====\n");
	ft_printf("ft_printf: %s\n", "Hello World");
	printf("printf:    %s\n", "Hello World");

	ft_printf("ft_printf: %s\n", "");
	printf("printf:    %s\n", "");

	printf("\n===== INT =====\n");
	ft_printf("ft_printf: %d\n", 42);
	printf("printf:    %d\n", 42);

	ft_printf("ft_printf: %d\n", -42);
	printf("printf:    %d\n", -42);

	ft_printf("ft_printf: %d\n", 0);
	printf("printf:    %d\n", 0);

	ft_printf("ft_printf: %d\n", INT_MAX);
	printf("printf:    %d\n", INT_MAX);

	ft_printf("ft_printf: %d\n", INT_MIN);
	printf("printf:    %d\n", INT_MIN);

	printf("\n===== INTEGER / i =====\n");
	ft_printf("ft_printf: %i\n", 12345);
	printf("printf:    %i\n", 12345);

	ft_printf("ft_printf: %i\n", -12345);
	printf("printf:    %i\n", -12345);

	printf("\n===== UNSIGNED =====\n");
	ft_printf("ft_printf: %u\n", 0);
	printf("printf:    %u\n", 0);

	ft_printf("ft_printf: %u\n", 42);
	printf("printf:    %u\n", 42);

	ft_printf("ft_printf: %u\n", UINT_MAX);
	printf("printf:    %u\n", UINT_MAX);

	printf("\n===== HEX LOWERCASE =====\n");
	ft_printf("ft_printf: %x\n", 0);
	printf("printf:    %x\n", 0);

	ft_printf("ft_printf: %x\n", 42);
	printf("printf:    %x\n", 42);

	ft_printf("ft_printf: %x\n", 255);
	printf("printf:    %x\n", 255);

	ft_printf("ft_printf: %x\n", UINT_MAX);
	printf("printf:    %x\n", UINT_MAX);

	printf("\n===== HEX UPPERCASE =====\n");
	ft_printf("ft_printf: %X\n", 0);
	printf("printf:    %X\n", 0);

	ft_printf("ft_printf: %X\n", 42);
	printf("printf:    %X\n", 42);

	ft_printf("ft_printf: %X\n", 255);
	printf("printf:    %X\n", 255);

	ft_printf("ft_printf: %X\n", UINT_MAX);
	printf("printf:    %X\n", UINT_MAX);

	printf("\n===== POINTER =====\n");
	int	n;

	n = 42;
	ft_printf("ft_printf: %p\n", &n);
	printf("printf:    %p\n", (void *)&n);

	ft_printf("ft_printf: %p\n", NULL);
	printf("printf:    %p\n", NULL);

	printf("\n===== PERCENT =====\n");
	ft_printf("ft_printf: 100%%\n");
	printf("printf:    100%%\n");

	ft_printf("ft_printf: %% %%%% %%%%\n");
	printf("printf:    %% %%%% %%%%\n");

	printf("\n===== MIXED =====\n");
	ft_printf("ft_printf: %c %s %d %i %u %x %X %%\n",
		'A', "Hello", -42, 42, 42, 42, 42);
	printf("printf:    %c %s %d %i %u %x %X %%\n",
		'A', "Hello", -42, 42, 42, 42, 42);

	printf("\n===== EMPTY STRING / SPECIAL =====\n");
	ft_printf("ft_printf: [%s]\n", "");
	printf("printf:    [%s]\n", "");

	ft_printf("ft_printf: [%c]\n", '\0');
	printf("printf:    [%c]\n", '\0');

	printf("\n===== STRING WITH PERCENT =====\n");
	ft_printf("ft_printf: %s\n", "hello % %");
	printf("printf:    %s\n", "hello % %");

	ft_printf("ft_printf: %s %s %s\n", "hello", "%", "world");
	printf("printf:    %s %s %s\n", "hello", "%", "world");

	printf("\n===== RETURN VALUES =====\n");
	printf("printf return:    %d\n", printf("hello"));
	printf("ft_printf return: %d\n", ft_printf("hello"));

	printf("\nprintf return:    %d\n", printf("%d", 42));
	printf("\nft_printf return: %d\n", ft_printf("%d", 42));

	printf("\nprintf return:    %d\n", printf("%s", "hello"));
	printf("\nft_printf return: %d\n", ft_printf("%s", "hello"));

	return (0);
}