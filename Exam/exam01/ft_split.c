#include <stdlib.h>

char   **ft_split(char *str)
{
   int i = 0;
   int j = 0;
   int k;
   char **result = malloc(10000);

   while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
      i++;
   while (str[i] != '\0')
   {
      if (str[i] > 32)
      {
         k = 0;
         result[j] = malloc(10000);
         while (str[i] > 32)
         {
            result[j][k] = str[i];
            i++;
            k++;
         }
         result[j][k] = '\0';
         j++;
      }
      else
         i++;
   }
   result[j] = 0;
   return (result);
}

// #include<stdio.h>
// int main(void)
// {
//    char **ret = ft_split("      \t \n Hello   \nHello\t   World!\t\n ");
   
//    for (int i = 0; ret[i]; i++)
//       printf("%s\n", ret[i]);
//    return 0;
// }