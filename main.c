
#include "libasm.h"

void	strlen_test(char *str)
{
	int		real_len;
	int		my_len;
	
	real_len = strlen(str);
	my_len = ft_strlen(str);

	if (*str == '\0')
		printf("String is: \t|'\\0'|\nstrlen: \t|%d|\nft_strlen: \t|%d|\n\n", real_len, my_len);
	else
		printf("String is: \t|%s|\nstrlen: \t|%d|\nft_strlen: \t|%d|\n\n", str, real_len, my_len);
	if (real_len == my_len)
			printf("" GREEN "Function ft_strlen is OK" RESET "\n\n");
	else
		printf("" RED "ERROR: check function ft_strlen again" RESET "\n\n");
}

void run_strlen_test(void)
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

void strcpy_test(char *str)
{
	char *real_str;
	char *my_str;
	char dst1[PATH_MAX];
	char dst2[PATH_MAX];

	bzero(dst1, 200);
	bzero(dst2, 200);
	real_str = strcpy(dst1, str);
	my_str = ft_strcpy(dst2, str);

	if (*str == '\0')
		printf("Src string is: \t|\\0|\nstrcpy: \t|%s|\nft_strcpy: \t|%s|\n\n", real_str, my_str);
	else if(*str == '\n')
		printf("Src string is: \t|\\n|\nstrcpy: \t|%s|\nft_strcpy: \t|%s|\n\n", real_str, my_str);
	else
		printf("Src string is: \t|%s|\nstrcpy: \t|%s|\nft_strcpy: \t|%s|\n\n",str, real_str, my_str);
	if (strcmp(real_str,my_str) == 0)
			printf("" GREEN "Function ft_strcpy is OK" RESET "\n\n");
	else
		printf("" RED "ERROR: check function ft_strcpy again" RESET "\n\n");
}

void run_strcpy_test(void)
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

void strcmp_test(char *str1, char *str2)
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

void write_test(int fd, char *str, int len)
{
	int real_write;
	int my_write;
	int	error1;
	int error2;

	real_write = write(fd, str, len);
	error1 = errno;
	write(fd, "\n", 1);
	my_write = ft_write(fd, str, len);
	error2 = errno;
	ft_write(fd, "\n", 1);
	if (*str == '\0')
	{
		printf("String is: \t|'\\0'|\nwrite: \t\t|%d|\nft_write: \t|%d|\n\n", real_write, my_write);
		printf("Errno is: \nwrite: \t\t|%d|\nft_write: \t|%d|\n\n", error1, error2);
	}
	else
	{
		printf("String is: \t|%s|\nwrite: \t\t|%d|\nft_write: \t|%d|\n\n", str, real_write, my_write);
		printf("Errno is: \nwrite: \t\t|%d|\nft_write: \t|%d|\n\n", error1, error2);
	}
	if (real_write == my_write)
		printf("" GREEN "Function ft_write is OK" RESET "\n\n");
	else
		printf("" RED "ERROR: check function ft_write again" RESET "\n\n");
}

int run_write_test(void)
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

int main(void)
{
	// run_strlen_test();
	// run_strcpy_test();
	// run_strcmp_test();
	run_write_test();
	// run_read_test();
	// run_strdup_test();
	// int a;
	// char *s = "01001abcd\t\t\0123";
	// printf("|%lu|\n", strlen(s));
	// a = write(1, "01001abcd\t\t\0123", 13);
	
    return(0);
}