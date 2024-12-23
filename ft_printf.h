/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 12:26:10 by ewu               #+#    #+#             */
/*   Updated: 2024/10/15 11:25:19 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *inpt, ...);
int		ft_write(char c, int *counter);
void	ft_cases(char s, va_list toprint, int *count);

void	ft_pfchar(char c, int *count);
void	ft_pfptr(size_t ptr, int *count);
int		ft_pfstr(char *s, int *count);

void	ft_pfhighx(unsigned int n, int *count);
void	ft_pflowx(unsigned int n, int *count);
int		ft_pfid(int n, int *count);
void	ft_pfu(unsigned int u, int *count);

#endif // !PRINTF.H
