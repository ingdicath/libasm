/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <dsalaman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 13:12:28 by dsalaman      #+#    #+#                 */
/*   Updated: 2020/11/12 13:30:07 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void	strlen_test(char *str)
{
	int		my_len;
	int		real_len;

	my_len = ft_strlen(str);
	real_len = strlen(str);
	if (*str == '\0')
		printf("String -> \\0")
	else
		printf("String %s, strlen: |%d|\nft_strlen: |%d|\n\n", str, real_len, my_len);
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

	strlen_test(str1);
	
	printf("" ORANGE "\n%-12s :  " WHITE "\n", "ft_strlen.s");
	printf("" ORANGE "\n************ FT_STRLEN **********" WHITE "\n");
	printf("--------- Test 1: several numbers --------\n");
	real_len = strlen(str1);
	my_len = ft_strlen(str1);
	printf("strlen: |%d|\nft_strlen: |%d|\n\n", real_len, my_len);

	printf("--------- Test 2: Empty space --------\n");
	real_len = strlen(str2);
	my_len = ft_strlen(str2);
	printf("strlen: |%d|\nft_strlen: |%d|\n\n", real_len, my_len);

	printf("--------- Test 3: using tabs --------\n");
	real_len = strlen(str3);
	my_len = ft_strlen(str3);
	printf("strlen: |%d|\nft_strlen: |%d|\n\n", real_len, my_len);

	printf("--------- Test 4: normal string --------\n");
	real_len = strlen(str4);
	my_len = ft_strlen(str4);
	printf("strlen: |%d|\nft_strlen: |%d|\n\n", real_len, my_len);

	printf("--------- Test 5: '\\0' --------\n");
	real_len = strlen(str5);
	my_len = ft_strlen(str5);
	printf("strlen: |%d|\nft_strlen: |%d|\n\n", real_len, my_len);

	printf("--------- Test 6: no data --------\n");
	real_len = strlen(str6);
	my_len = ft_strlen(str6);
	printf("strlen: |%d|\nft_strlen: |%d|\n\n", real_len, my_len);

	printf("--------- Test 7: '01' --------\n");
	real_len = strlen(str7);
	my_len = ft_strlen(str7);
	printf("strlen: |%d|\nft_strlen: |%d|\n\n", real_len, my_len);

	printf("--------- Test 8: '\\0' between string' --------\n");
	real_len = strlen(str8);
	my_len = ft_strlen(str8);
	printf("strlen: |%d|\nft_strlen: |%d|\n\n", real_len, my_len);

	if (strlen(str1) == ft_strlen(str1) && strlen(str2) == ft_strlen(str2) &&
		strlen(str3) == ft_strlen(str3) && strlen(str4) == ft_strlen(str4) &&
		strlen(str5) == ft_strlen(str5) && strlen(str6) == ft_strlen(str6) &&
		strlen(str7) == ft_strlen(str7) && strlen(str8) == ft_strlen(str8))
		printf("" GREEN "Function ft_strlen is OK" WHITE "\n\n");
	else
		printf("ERROR: check function ft_strlen again\n\n");
}


}




	

/* function copy the string src to dst */


// void strcpy_test(void)
// {
// 	char *real_str;
// 	char *my_str;
// 	char dst1[100];
// 	char dst2[100];
// 	char str1[] = "Boston marathon";
// 	char str2[] = "London maratoooooooooo";
// 	char str3[] = "Boston marathon";
// 	char str4[] = "London maratoooooooooo";

// 	real_str = strcpy(str2, str1);
// 	my_str = ft_strcpy(str2, str1);

// 	printf("" ORANGE "\n*********** FT_STRCPY **********" WHITE "\n");
// 	printf("--------- Test 1: normal strings --------\n");
// 	printf("strcpy: |%s|\nft_strcpy: |%s|\n\n", real_str, my_str);


// 	printf("--------- Test 2: several numbers --------\n");
// 	real_len = strlen(str1);
// 	my_len = ft_strlen(str1);
// 	printf("strlen: |%d|\nft_strlen: |%d|\n\n", real_len, my_len);

// 	if (strcpy(dstn, org) == ft_strcpy(dstn, org))

// 		// && strcpy(str2) == ft_strcpy(str2) &&
// 		// strcpy(str3) == ft_strcpy(str3) && strcpy(str4) == ft_strcpy(str4) &&
// 		// strcpy(str5) == ft_strcpy(str5) && strcpy(str6) == ft_strcpy(str6) &&
// 		// strcpy(str7) == ft_strcpy(str7) && strcpy(str8) == ft_strcpy(str8))
// 		printf("" GREEN "Function ft_strcpy is OK" WHITE "\n");
// 	else
// 		printf("" RED "ERROR: check function ft_strcpy again" WHITE "\n");
// 	// my_len = ft_strcpy(str1);
// 	// real_len = strcpy(str1);
// 	// printf("strcpy: |%d|\nft_strcpy: |%d|\n\n", real_len, my_len);
// }

// void ft_strcmp_test(char *s1, char*s2)
// {
// 	int real_cmp;
// 	int my_cmp;
// 	char str1[] = "123456789";
// 	char str2[] = "12345678\09";
// 	char str3[] = "\0";
// 	char str4[] = "\0";
// 	char str5[] = "";
// 	char str6[] = "";
// 	char str7[] = "hellodejaelshow";
// 	char str8[] = "hellodejaelshow";
// 	char str9[] = "01tyuiop";
// 	char str10[] = "0";
// 	char str11[] = "0";

// 	printf("" ORANGE "\n*********** FT_STRCMP **********" WHITE "\n");

// 	real_cmp = strcmp(str1, str2);
// 	my_cmp = ft_strcmp(str1, str2);
// 	printf("strcmp: |%d|\nft_strcmp: |%d|\n\n", num1, num2);


// 	if (strcmp(str1, str2) == ft_strcmp(str1, str2) && 
// 		strcmp(str3, str4) == ft_strcmp(str3, str4) &&
// 		strcmp(str6, str7) == ft_strcmp(str6, str7) &&
// 		strcmp(str5, str6) == ft_strcmp(str5, str6) &&
// 		strcmp(str7, str8) == ft_strcmp(str7, str8) &&
// 		strcmp(str10, str11) == ft_strcmp(str7, str8) &&
// 		strcmp(str8, str9) == ft_strcmp(str8, str9))
// 		printf("" GREEN "Function ft_strcmp is OK" WHITE "\n");
// 	else
// 		printf("" RED "ERROR: check function ft_strcmp again" WHITE "\n");
// }

void write_test(void)
{

}

void read_test(void)
{

}

void strdup_test(void)
{

}



