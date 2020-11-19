/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <dsalaman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/17 18:43:57 by dsalaman      #+#    #+#                 */
/*   Updated: 2020/11/18 22:50:26 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

/*
**	---------------------------------------------------------------------------
**									FT_STRLEN
**	---------------------------------------------------------------------------
*/

void	strlen_test(char *str)
{
	int		real;
	int		own;

	real = strlen(str);
	own = ft_strlen(str);
	if (*str == '\0')
		printf("String is: \t|'\\0'|\nstrlen: \t|%d|\nft_strlen: \t|%d|\n\n", real, own);
	else
		printf("String is: \t|%s|\nstrlen: \t|%d|\nft_strlen: \t|%d|\n\n", str, real, own);
	if (real == own)
			printf("" GREEN "Function ft_strlen is OK" RESET "\n\n");
	else
		printf("" RED "ERROR: check function ft_strlen again" RESET "\n\n");
}

void	run_strlen_test(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;
	char *str5;
	char *str6;
	char *str7;
	char *str8;

	str1 = "45645646546540";
	str2 = " ";
	str3 = "01001abcd\t\t\0123";
	str4 = "Boston marathon";
	str5 = "\0";
	str6 = "";
	str7 = "01";
	str8 = "01\0buenaaassssss0";
	printf("" ORANGE "\n************ FT_STRLEN **********" RESET "\n\n");
	printf("" CYAN "--------- Test 1 --------" RESET "\n");
	strlen_test(str1);
	printf("" CYAN "--------- Test 2 --------" RESET "\n");
	strlen_test(str2);
	printf("" CYAN "--------- Test 3 --------" RESET "\n");
	strlen_test(str3);
	printf("" CYAN "--------- Test 4 --------" RESET "\n");
	strlen_test(str4);
	printf("" CYAN "--------- Test 5 --------" RESET "\n");
	strlen_test(str5);
	printf("" CYAN "--------- Test 6 --------" RESET "\n");
	strlen_test(str6);
	printf("" CYAN "--------- Test 7 --------" RESET "\n");
	strlen_test(str7);
	printf("" CYAN "--------- Test 8 --------" RESET "\n");
	strlen_test(str8);
}

/*
**	---------------------------------------------------------------------------
**									FT_STRCPY
**	---------------------------------------------------------------------------
*/

void	strcpy_test(char *str)
{
	char *real_str;
	char *my_str;
	char dst1[BUFFER_SIZE];
	char dst2[BUFFER_SIZE];

	bzero(dst1, sizeof(dst1));
	bzero(dst2, sizeof(dst2));
	real_str = strcpy(dst1, str);
	my_str = ft_strcpy(dst2, str);
	if (*str == '\0')
		printf("Src string is: \t|\\0|\nstrcpy: \t|%s|\nft_strcpy: \t|%s|\n\n", real_str, my_str);
	else if (*str == '\n')
		printf("Src string is: \t|\\n|\nstrcpy: \t|%s|\nft_strcpy: \t|%s|\n\n", real_str, my_str);
	else
		printf ("Src string is: \t|%s|\nstrcpy: \t|%s|\nft_strcpy: \t|%s|\n\n",str, real_str, my_str);
	if (strcmp(real_str, my_str) == 0)
		printf("" GREEN "Function ft_strcpy is OK" RESET "\n\n");
	else
		printf("" RED "ERROR: check function ft_strcpy again" RESET "\n\n");
}

void	run_strcpy_test(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;
	char *str5;
	char *str6;
	char *str7;
	char *str8;

	str1 = "45645646546540";
	str2 = " ";
	str3 = "01001abcd\t\t\0123";
	str4 = "Boston marathon";
	str5 = "\0";
	str6 = "";
	str7 = "0123456789abcdefABCDEF0123456789abcdefABCDEF0123456789abcdefABCDEF0123456789abcdefABCDEF0123456789abcdefABCDEF0123456789abcdefA";
	str8 = "01\0buenaaassssss0";
	printf("" PURPLE "\n************ FT_STRCPY **********" RESET "\n\n");
	printf("" CYAN "--------- Test 1 --------" RESET "\n");
	strcpy_test(str1);
	printf("" CYAN "--------- Test 2 --------" RESET "\n");
	strcpy_test(str2);
	printf("" CYAN "--------- Test 3 --------" RESET "\n");
	strcpy_test(str3);
	printf("" CYAN "--------- Test 4 --------" RESET "\n");
	strcpy_test(str4);
	printf("" CYAN "--------- Test 5 --------" RESET "\n");
	strcpy_test(str5);
	printf("" CYAN "--------- Test 6 --------" RESET "\n");
	strcpy_test(str6);
	printf("" CYAN "--------- Test 7 --------" RESET "\n");
	strcpy_test(str7);
	printf("" CYAN "--------- Test 8 --------" RESET "\n");
	strcpy_test(str8);
}

/*
**	---------------------------------------------------------------------------
**									FT_STRCMP
**	---------------------------------------------------------------------------
*/

void	strcmp_test(char *str1, char *str2)
{
	int		real_cmp;
	int		my_cmp;
	
	real_cmp = strcmp(str1, str2);
	my_cmp = ft_strcmp(str1, str2);
	
	if (*str1 == '\0' && *str2 == '\0')
		printf("String 1 and 2 are \t|'\\0'|\nstrcmp: \t|%d|\nft_strcmp: \t|%d|\n\n", real_cmp, my_cmp);
	else
		printf("String 1 |%s|, String 2 |%s|\nstrcmp: \t|%d|\nft_strcmp: \t|%d|\n\n", str1, str2, real_cmp, my_cmp);
	if (real_cmp == my_cmp)
			printf("" GREEN "Function ft_strcmp is OK" RESET "\n\n");
	else
		printf("" RED "ERROR: check function ft_strcmp again" RESET "\n\n");
}

void run_strcmp_test(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;
	char *str5;
	char *str6;
	char *str7;
	char *str8;
	char *str9;
	char *str10;

	str1 = "Boston marathon";
	str2 = "Boston marathon";
	str3 = "01001abcd\t\t\0123";
	str4 = "01001abcd\t\t\0123";
	str5 = "\0";
	str6 = "\0";
	str7 = "";
	str8 = "";
	str9 = "Hola pirinola\0buenaaassssss0";
	str10 = "Hola pirinola";
	printf("" PINK "\n************ FT_STRCMP **********" RESET "\n\n");
	printf("" CYAN "--------- Test 1 --------" RESET "\n");
	strcmp_test(str1, str2);
	printf("" CYAN "--------- Test 2 --------" RESET "\n");
	strcmp_test(str3, str3);
	printf("" CYAN "--------- Test 3 --------" RESET "\n");
	strcmp_test(str5, str6);
	printf("" CYAN "--------- Test 4 --------" RESET "\n");
	strcmp_test(str7, str8);
	printf("" CYAN "--------- Test 5 --------" RESET "\n");
	strcmp_test(str9, str10);
	printf("" CYAN "--------- Test 6 --------" RESET "\n");
	strcmp_test(str7, str10);
	printf("" CYAN "--------- Test 7 --------" RESET "\n");
	strcmp_test(str10, str7);
}

/*
**	---------------------------------------------------------------------------
**									FT_WRITE
**	---------------------------------------------------------------------------
*/

void	write_test(int fd, char *str, int len)
{
	int real;
	int own;
	int	error1;
	int error2;

	real = write(fd, str, len);
	error1 = errno;
	printf("\n");
	own = ft_write(fd, str, len);
	error2 = errno;
	printf("\n\n");
	if (*str == '\0')
	{
		printf("String is: \t|'\\0'|\nwrite: \t\t|%d|\nft_write: \t|%d|\n\n", real, own);
		printf("Errno is: \nwrite: \t\t|%d|\nft_write: \t|%d|\n\n", error1, error2);
	}
	else
	{
		printf("String is: \t|%s|\nwrite: \t\t|%d|\nft_write: \t|%d|\n\n", str, real, own);
		printf("Errno is: \nwrite: \t\t|%d|\nft_write: \t|%d|\n\n", error1, error2);
	}
	if (real == own)
		printf("" GREEN "Function ft_write is OK" RESET "\n\n");
	else
		printf("" RED "ERROR: check function ft_write again" RESET "\n\n");
}

int	run_write_test(void)
{
	int fd;
	char *str1;
	// char *str2;
	char *str3;
	// char *str4;
	char *str5;
	// char *str6;
	// char *str7;
	// char *str8;
	// char *str9;
	// char *str10;

	str1 = "Boston marathon";
	// str2 = "Boston marathon";
	str3 = "01001abcd\t\t\0123";
	// str4 = "01001abcd\t\t\0123";
	str5 = "\0";
	// str6 = "\0";
	// str7 = "";
	// str8 = "";
	// str9 = "Hola pirinola\0buenaaassssss0";
	// str10 = "Hola pirinola";

	fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd < 0)
		return (-1);
	printf("" BLUE "\n************ FT_WRITE **********" RESET "\n\n");
	printf("" CYAN "--------- Test 1 --------" RESET "\n");
	write_test(1, str1, strlen(str1));
	printf("" CYAN "--------- Test 2 --------" RESET "\n");
	write_test(1, str3, strlen(str3));
	printf("" CYAN "--------- Test 3 --------" RESET "\n");
	write_test(1, str5, strlen(str5));
	printf("" CYAN "--------- Test 4 --------" RESET "\n");
	write_test(50, str1, strlen(str1));
	close(fd);
	return(0);
}

/*
**	---------------------------------------------------------------------------
**									FT_READ
**	---------------------------------------------------------------------------
*/

int read_test(char *file, size_t len)
{
	int fd;
	int real;
	int own;
	int error1;
	int error2;
	char buf1[100];
	char buf2[100];

	bzero(buf1, sizeof(buf1));
	bzero(buf2, sizeof(buf2));
	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (-1);
	real = read(fd, buf1, len);
	error1 = errno;
	if (*buf1 == '\0')
	{
		printf("String read is: \t|'\\0'|\n");
		printf("Errno read is: \t\t|%d|\n\n", error1);
	}
	else
	{
		printf("String read is: \t|%s|\nread size: \t\t|%d|\n", buf1, real);
		printf("Errno read is: \t\t|%d|\n\n", error1);
	}
	close(fd);
	fd = open(file, O_RDONLY);
	own = ft_read(fd, buf2, len);
	error2 = errno;
	if (*buf2 == '\0')
	{
		printf("String ft_read is: \t|'\\0'|\n");
		printf("Errno ft_read is: \t|%d|\n\n", error2);
	}
	else
	{
		printf("String ft_read is: \t|%s|\nft_read size: \t\t|%d|\n", buf2, own);
		printf("Errno ft_read is: \t|%d|\n\n", error2);
	}
	close(fd);
	if (real == own)
		printf("" GREEN "Function ft_read is OK" RESET "\n\n");
	else
		printf("" RED "ERROR: check function ft_read again" RESET "\n\n");
	close(fd);
	return (0);
}

void	run_read_test(void)
{
	int real;
	int own;
	char buf1[100];
	char buf2[100];
	
	bzero(buf1, sizeof(buf1));
	bzero(buf2, sizeof(buf2));

	printf("" BLUE "\n************ FT_READ **********" RESET "\n\n");
	printf("" CYAN "--------- Test 1 --------" RESET "\n");
	real = read(42, buf1, 20);
	if (*buf1 == '\0')
	{
		printf("String read is: \t|'\\0'|\n");
		printf("Errno read is: \t\t|%d|\n\n", errno);
	}
	else
	{
		printf("String ft_read is: \t|%s|\nread size: \t\t|%d|\n", buf1, real);
		printf("Errno read is: \t\t|%d|\n\n", errno);
	}
	own = ft_read(42, buf2, 20);
	if (*buf2 == '\0')
	{
		printf("String ft_read is: \t|'\\0'|\n");
		printf("Errno ft_read: \t\t|%d|\n\n", errno);
	}
	else
	{
		printf("String ft_read is: \t|%s|\nft_read size: \t\t|%d|\n", buf2, own);
		printf("Errno ft_read is: : \t\t|%d|\n\n", errno);
	}
	if (real == own)
		printf("" GREEN "Function ft_read is OK" RESET "\n\n");
	else
		printf("" RED "ERROR: check function ft_read again" RESET "\n\n");
	errno = 0;
	printf("" CYAN "--------- Test 2 --------" RESET "\n");
	read_test("test.txt", 0);
	printf("" CYAN "--------- Test 3 --------" RESET "\n");
	read_test("libasm.h", 20);
	printf("" CYAN "--------- Test 4 --------" RESET "\n");
	read_test("test.txt", 99);
	printf("" CYAN "--------- Test 5 --------" RESET "\n");
	read_test("test.txt", -5);
	errno = 0;
	printf("" CYAN "--------- Test 6 --------" RESET "\n");
	read_test("whatever", 15);
	printf("" CYAN "--------- Test 7 --------" RESET "\n");
	read_test("empty.txt", 15);
}

/*
**	---------------------------------------------------------------------------
**									FT_STRDUP
**	---------------------------------------------------------------------------
*/

void	strdup_test(char *str)
{
	char *real_dup;
	char *my_dup;
	int error1;
	int error2;

	real_dup = strdup(str);
	error1 = errno;
	my_dup = ft_strdup(str);
	error2 = errno;
	if (*str == '\0')
	{
		printf("String is: \t|'\\0'|\nstrdup: \t|%s|\nft_strdup: \t|%s|\n\n", real_dup, my_dup);
		printf("Errno is: \nstrdup: \t|%d|\nft_strdup: \t|%d|\n\n", error1, error2);
	}
	else
	{
		printf("String is: \t|%s|\nstrdup: \t|%s|\nft_strdup: \t|%s|\n\n", str, real_dup, my_dup);
		printf("Errno is: \nstrdup: \t|%d|\nft_strdup: \t|%d|\n\n", error1, error2);
	}
	if (!strcmp(real_dup, my_dup) && (size_t)str != (size_t)my_dup && error1 == error2)
		printf("" GREEN "Function ft_strdup is OK" RESET "\n\n");
	else
		printf("" RED "ERROR: check function ft_strdup again" RESET "\n\n");
	free(real_dup);
	free(my_dup);
}

void	run_strdup_test(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;
	char *str5;
	char *str6;
	char *str7;
	char *str8;

	str1 = "Boston marathon";
	str2 = "\n";
	str3 = "01001abcd\t\t\0123";
	str4 = "Boston marathon";
	str5 = "\0";
	str6 = "";
	str7 = "0123456789abcdefABCDEF0123456789abcdefABCDEF0123456789abcdefABCDEF0123456789abcdefABCDEF0123456789abcdefABCDEF0123456789abcdefA";
	str8 = "01\0buenaaassssss0";
	printf("" PURPLE "\n************ FT_STRDUP **********" RESET "\n\n");
	printf("" CYAN "--------- Test 1 --------" RESET "\n");
	strdup_test(str1);
	printf("" CYAN "--------- Test 2 --------" RESET "\n");
	strdup_test(str2);
	printf("" CYAN "--------- Test 3 --------" RESET "\n");
	strdup_test(str3);
	printf("" CYAN "--------- Test 4 --------" RESET "\n");
	strdup_test(str4);
	printf("" CYAN "--------- Test 5 --------" RESET "\n");
	strdup_test(str5);
	printf("" CYAN "--------- Test 6 --------" RESET "\n");
	strdup_test(str6);
	printf("" CYAN "--------- Test 7 --------" RESET "\n");
	strdup_test(str7);
	printf("" CYAN "--------- Test 8 --------" RESET "\n");
	strdup_test(str8);
}

int	main(void)
{
	run_strlen_test();
	run_strcpy_test();
	run_strcmp_test();
	run_write_test();
	run_read_test();
	run_strdup_test();

	// int a =	strcmp("\xff\xff", "\xff");
	// int b = ft_strcmp ("\xff\xff", "\xff");
	// printf("valor real es: %d\n",a );
	// printf("valor propio es: %d\n", b);
    return(0);
}
