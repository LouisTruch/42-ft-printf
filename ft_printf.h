/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltruchel <ltruchel@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:22:39 by ltruchel          #+#    #+#             */
/*   Updated: 2022/10/26 21:35:09 by ltruchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# define B_DEC "0123456789"
# define B_HEXL "0123456789abcdef"
# define B_HEXU "0123456789ABCDEF"

int	ft_printf(const char *format, ...);
int	putchar_cnt(char c, int count);
int	putstr_cnt(char *s, int count);
int	putnbrbase_cnt(long long nb, char *base, int count);
int	putunbrbase_cnt(unsigned long long nb, char *base, int count);
int	ft_strlen(char *s);

#endif
