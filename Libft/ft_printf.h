/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:21:15 by gforns-s          #+#    #+#             */
/*   Updated: 2023/06/13 15:49:52 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_string(char *s);
int		ft_char(int s);
int		ft_u(unsigned int s);
int		ft_hex(unsigned int s);
int		ft_hexcap(unsigned int s);
int		ft_ptr(unsigned long s);
int		ft_itoaprint(int n);

#endif