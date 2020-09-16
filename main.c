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

// int test_strlen(char *str)
// {
// 	str = "Boston marathon";
// 	strlen(str);
// }
#define KNRM  "\x1B[0m"
#define KRED  "\033[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"


int main(void)
{

	printf("%sbuenas\n", KRED);
    printf("%sgreen\n", KGRN);
    printf("%syellow\n", KYEL);
    printf("%sblue\n", KBLU);
    printf("%smagenta\n", KMAG);
    printf("%scyan\n", KCYN);
    printf("%swhite\n", KWHT);
    printf("%snormal\n", KNRM);

	// printf("\033[1;31m");
 //  	printf("Hello world\n");
 //  	printf("\033[0m");
    return(0);
}