/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungor <sungor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:38:55 by sungor            #+#    #+#             */
/*   Updated: 2024/10/26 14:46:36 by sungor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
		return 1;
	else
		return 0;
}

#include <stdio.h>
int main()
{
	char a = 100;
	printf("%d",ft_isdigit(a));
	printf("%d",ft_isdigit('7'));
}
