/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mlubbers <mlubbers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/30 13:19:45 by mlubbers      #+#    #+#                 */
/*   Updated: 2024/01/08 14:59:37 by mlubbers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int		ftp_printf(const char *format, ...);
int		ftp_putchar(int c);
int		ftp_putstr(char *s);
void	ftp_putnbr(long n);
int		ftp_itoa(int n);
int		ftp_uitoa(int n);
int		ftp_charcount(unsigned long long nbr);
void	ftp_puthexbase(unsigned long long nbr, char *base);
int		ftp_puthex(int i, char x);
int		ftp_putpoint(unsigned long long l);

#endif