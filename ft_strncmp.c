#include <stdio.h>
#include<string.h>

int ft_strncmp( const char *s1,const char *s2,size_t n)
{
    size_t i;
    i = 0;
    while(i < n)
    {
        if(s1[i] != s2[i])
            return (s1[i]-s2[i]);
        i++;
    }
    return 0;
}
int main()
{
    char a[] = "chilleme zamani";
    char b[] = "chilleme ve otobüse binme zamani";
    printf(" benim minnos fonksiyonumun sonucu %d",ft_strncmp(a,b,15));
    printf("\n gercek fonki : %d",strncmp(a,b,15));
}
