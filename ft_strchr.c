/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungor <sungor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:26:53 by sungor            #+#    #+#             */
/*   Updated: 2024/10/27 18:41:57 by sungor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 int ft_strlen( const char *s);
 char *ft_strchr(const char *s, int c)
 {
    int i = 0;
    int n = ft_strlen(s);
    while(i < n)
    {
        if(s[i] == (char)c)
            return (s + i);
            i++;
    }
    if(s[i] == (char)c)
      {
        return s+i;
      }
        
    return NULL;
 }

 #include <stdio.h>
 int main()
 {
    char a [20] = "sevilaylay";
    if(ft_strchr(a,'t') != NULL)
    {
        printf("var");
    }
    else 
        printf("yok");
        
 }
 