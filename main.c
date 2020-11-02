/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsalaman <dsalaman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/15 09:05:30 by dsalaman      #+#    #+#                 */
/*   Updated: 2020/09/15 09:05:53 by dsalaman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void	ft_strlen_test(void)
{
	int		my_len;
	int		real_len;
	char	str1[] = "45645646546540";
	char	str2[] = " ";
	char	str3[] = "01001abcd\t\t\0123";
	char	str4[] = "Boston marathon";
	char	str5[] = "\0";
	char	str6[] = "";
	char	str7[] = "01";
	char	str8[] = "01\0buenaaassssss0";	
	
	printf("*********** FT_STRLEN **********\n");
	printf("--------- Test 1: several numbers --------\n");
	my_len = strlen(str1);
	real_len = ft_strlen(str1);
	printf("strlen: |%d|\nft_strlen: |%d|\n\n", real_len, my_len);

	printf("--------- Test 2: Empty space --------\n");
	my_len = strlen(str2);
	real_len = ft_strlen(str2);
	printf("strlen: |%d|\nft_strlen: |%d|\n\n", real_len, my_len);

	printf("--------- Test 3: using tabs --------\n");
	my_len = strlen(str3);
	real_len = ft_strlen(str3);
	printf("strlen: |%d|\nft_strlen: |%d|\n\n", real_len, my_len);

	printf("--------- Test 4: normal string --------\n");
	my_len = strlen(str4);
	real_len = ft_strlen(str4);
	printf("strlen: |%d|\nft_strlen: |%d|\n\n", real_len, my_len);

	printf("--------- Test 5: '\\0' --------\n");
	my_len = strlen(str5);
	real_len = ft_strlen(str5);
	printf("strlen: |%d|\nft_strlen: |%d|\n\n", real_len, my_len);

	printf("--------- Test 6: no data --------\n");
	my_len = strlen(str6);
	real_len = ft_strlen(str6);
	printf("strlen: |%d|\nft_strlen: |%d|\n\n", real_len, my_len);

	printf("--------- Test 7: '01' --------\n");
	my_len = strlen(str7);
	real_len = ft_strlen(str7);
	printf("strlen: |%d|\nft_strlen: |%d|\n\n", real_len, my_len);


	printf("--------- Test 8: '\\0' between string' --------\n");
	my_len = strlen(str8);
	real_len = ft_strlen(str8);
	printf("strlen: |%d|\nft_strlen: |%d|\n\n", real_len, my_len);

	if (strlen(str1) == ft_strlen(str1) && strlen(str2) == ft_strlen(str2) &&
		strlen(str3) == ft_strlen(str3) && strlen(str4) == ft_strlen(str4) &&
		strlen(str5) == ft_strlen(str5) && strlen(str6) == ft_strlen(str6) &&
		strlen(str7) == ft_strlen(str7) && strlen(str8) == ft_strlen(str8))
		printf("Function ft_strlen is OK\n\n");
	else
		printf("ERROR: check function ft_strlen again\n\n");
}


/* function copy the string src to dst */

void ft_strcpy_test(void)
{
	char org[] = "Boston marathon";
	char dstn[] = "London marathooooooooo";
	char *str1;
	char *str2;
	// char *str3;
	// char *str4;

	str1 = strcpy(dstn, org);
	str2 = ft_strcpy(dstn, org);
	printf("*********** FT_STRCPY **********\n");
	printf("--------- Test 1: normal strings --------\n");
	printf("strcpy: |%s|\nft_strcpy: |%s|\n\n", str1, str2);


	if (strcpy(dstn, org) == ft_strcpy(dstn, org))

		// && strcpy(str2) == ft_strcpy(str2) &&
		// strcpy(str3) == ft_strcpy(str3) && strcpy(str4) == ft_strcpy(str4) &&
		// strcpy(str5) == ft_strcpy(str5) && strcpy(str6) == ft_strcpy(str6) &&
		// strcpy(str7) == ft_strcpy(str7) && strcpy(str8) == ft_strcpy(str8))
		printf("Function ft_strcpy is OK\n");
	else
		printf("ERROR: check function ft_strcpy again\n");
	// my_len = ft_strcpy(str1);
	// real_len = strcpy(str1);
	// printf("strcpy: |%d|\nft_strcpy: |%d|\n\n", real_len, my_len);
}

int main(void)
{
	// ft_strlen_test();
	ft_strcpy_test();

    return(0);
}
