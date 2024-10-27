/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungor <sungor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 03:46:15 by sungor            #+#    #+#             */
/*   Updated: 2024/10/27 13:52:02 by sungor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stddef.h>

int ft_strlen(char *ptr);
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    
        unsigned char *dest1 = (unsigned char *)dest;
        unsigned char *src1  = ( unsigned char *)src;
        size_t i;
        i = 0;
        while(i < n)
        {
           dest1[i] = src1[i];
            i++;
        }
        return dest;
   
    
}

/*
int main()
{
    char dest[200];   
    char src[40] =  "selam canim ben amcanim ";
    char src2[39]="cozdum";
    char *dest1 = memcpy(dest,src,7);
    char *dest2 = ft_memcpy(dest,src2,7);
    printf("%s\n",dest1);
    printf("%s\n",dest2);
}*/