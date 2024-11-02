#include<stdio.h>
#include<string.h>

char *ft_strnstr(const char *haystack,const char *needle, size_t len)
{
    if( needle == NULL)
    {
        return haystack; 
    }
    size_t i ;
    size_t k ;
    k = 0;
    i = 0;
     while(i < len)
     {
        if(haystack[i] == needle[k])
        {
            size_t j = 1;
            while(haystack[i + j] == needle[k + j] || needle[i+j] == '\0' || haystack[i + j] != '\0')
            {
                j++;
                if( needle [i + j] == '\0')
                {
                    return haystack + i;
                }

            }
        }
        i++;
     }
     return NULL;
}
int main()
{
    char a[] = "sevilay";
    char b [] = "ay";
      char  *ptr = ft_strnstr(a,b,3);
     char *ptr1 = strnstr(a,b,3);
    printf("%s",ptr);
    printf("%s",ptr1);
}
