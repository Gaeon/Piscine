/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:01:39 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/31 17:36:01 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ex00/ft_strdup.c"
// #include "ex01/ft_range.c"
// #include "ex02/ft_ultimate_range.c"
// #include "ex03/ft_strjoin.c"
// #include "ex04/ft_convert_base.c"
// #include "ex04/ft_convert_base2.c"
// #include "ex05/ft_split.c"

// #include <stdio.h>
// #include <string.h> 

// int main()
// {
// 	{
// 		printf("======ex00======\n");
// 		char str[50] = "hello world";
// 		printf("%s %s\n", strdup(str), ft_strdup(str));
// 	}
// 	{
// 		printf("======ex01======\n");
// 		int *arr = ft_range(3, 5);
// 		int i = 0;
// 		while (arr[i] != '\0')
// 		{
// 			printf("%d ", arr[i]);
// 			i++;
// 		}
// 		printf("\n");
// 		int *arr1 = ft_range(-1, 10);
// 		i = 0;
// 		for(i = 0 ; i < 11 ; i++)
// 		{
// 			printf("%d ", arr1[i]);
// 		}
// 		printf("\n");
// 	}
// 	{
// 		printf("======ex02======\n");
// 		int *arr;
// 		printf("%d\n", ft_ultimate_range(&arr, 3, 5));
// 		printf("%d\n", ft_ultimate_range(&arr, -1, 9));
// 		printf("%d\n", ft_ultimate_range(&arr, 10, 0));
// 	}
// 	{
// 		printf("======ex03======\n");
// 		char *strs[] = {"hello","4242", "world","gaeon", "nojam"};
// 		char sep[10] = " : ";
// 		int	size = 5;
// 		printf("%s\n", ft_strjoin(size, strs, sep));
// 	}
// 	{
// 		printf("======ex04======\n");
// 		char nbr[10] = "321321";
// 		char base_form[10] = "01234567";
// 		char base_to[10] = "01";
// 		printf("%s\n", ft_convert_base(nbr, base_form, base_to));
// 	}
// 	{
// 		printf("======ex05======\n");
// 		char charset[10] = "!@#$^&";
// 		char str[100] = "hello!world@happy#thurs^day";
// 		char **strs = ft_split(str, charset);
// 		int i = 0;
// 		while (strs[i] != NULL)
// 		{
// 			printf("%s", strs[i]);
// 			i++;
// 		}
// 	}
// }

#include "./ex00/ft_strdup.c"
#include "./ex01/ft_range.c"
#include "./ex02/ft_ultimate_range.c"
#include "./ex03/ft_strjoin.c"
#include "./ex04/ft_convert_base.c"
#include "./ex04/ft_convert_base2.c"
#include "./ex05/ft_split.c"
#include <stdio.h>
#include <stdlib.h>

int main(){
   {
      printf("----ex00----\n");
      char *str;
      str = ft_strdup("HELLO WORLD!!!");
      printf("%s\n", str);
      free (str);
      str = ft_strdup("42!~?@(10\t~~!");
      printf("%s\n", str);
      free (str);
      str = ft_strdup("");
      printf("%s\n", str);
      free (str);
   }
   {
      printf("----ex01----\n");
      int   *arr;
      arr = ft_range(-9, 10);
      for(int i=0;i<10-(-9);i++)
         printf("%d ",arr[i]);
      printf("\n");
      free(arr);
      arr = ft_range(1, 1);
      printf("%p\n", arr);
      free(arr);
   }
//    {
//       printf("----ex02----\n");
//       int   *arr;
//       int size;
//       size = ft_ultimate_range(&arr, 1, 24);
//       for(int i=0;i<24-(1);i++)
//          printf("%d ",arr[i]);
//       printf("\nsize : %d\n", size);
//       free(arr);
//       size = ft_ultimate_range(&arr, 1, 1);
//       printf("%p\n", arr);
//       printf("size : %d\n", size);
//       free(arr);
//    }
   {
      printf("----ex03----\n");
      char *strs[10];
      strs[0] = "Hello";
      strs[1] = "My";
      strs[2] = "name";
      strs[3] = "is";
      strs[4] = "sryou";
      strs[5] = "Nice";
      strs[6] = "to";
      strs[7] = "see";
      strs[8] = "you";
      strs[9] = "!!!";
      char *sep1 = " ";
      char *sep2 = "\n";
      char *sep3 = "---!!---";
      char *sep4 = "";
      char *str;
      str = ft_strjoin(5, strs, sep1);
      printf("%s\n", str);
      free(str);
      str = ft_strjoin(10, strs, sep2);
      printf("%s\n", str);
      free(str);
      str = ft_strjoin(2, strs, sep3);
      printf("%s\n", str);
      free(str);
      str = ft_strjoin(1, strs, sep1);
      printf("%s\n", str);
      free(str);
      str = ft_strjoin(0, strs, sep1);
      printf("%s\n", str);
      free(str);
      str = ft_strjoin(10, strs, sep4);
      printf("%s\n", str);
      free(str);
   }
   {
      printf("----ex04----\n");
      char *str;
      str = ft_convert_base("15858", "012345678", "0123456789ABCDEF");
      printf("2A9B : %s\n", str);
      free(str);
      str = ft_convert_base("  \t \n -+-+-28909abc", "0123456789abcdef", "0123456789ABCDEFGHIJ");
      printf("-ACDADBG : %s\n", str);
      free(str);
      str = ft_convert_base(" --zzixzoz", "ozix", "POIUYTREWQ");
      printf("TWYO : %s\n", str);
      free(str);
      char base[6] = {-19, 66, -1, -8, -20, 0};
      str = ft_convert_base("++858a112", "845a", base);
      printf("B?? : %s\n", str);
      free(str);

      str = ft_convert_base("15858", "01234aa5678", "012345679ABCDEF");
      printf("null : %s\n", str);
      free(str);   
      str = ft_convert_base("15858", "01278", "0");
      printf("null : %s\n", str);
      free(str);   
      str = ft_convert_base("15858", "01-278", "019ABCDEF");
      printf("null : %s\n", str);
      free(str);
   }
   {
      printf("----ex05----\n");
      char **str_arr;
      int i;
      str_arr = ft_split("Hello World Cat\tDog\nPizza School"," \n");
      for(i=0;str_arr[i] != 0; i++)
         printf("%s\n",str_arr[i]);
      for(i=0;str_arr[i] != 0; i++)
         free(str_arr[i]);
      free(str_arr);   
      str_arr = ft_split("Hello World Cat\tDog\nPizza School"," World");
      for(i=0;str_arr[i] != 0; i++)
         printf("%s\n",str_arr[i]);
      for(i=0;str_arr[i] != 0; i++)
         free(str_arr[i]);
      free(str_arr);

   }
}