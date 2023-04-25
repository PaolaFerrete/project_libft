/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paola <paola@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:29:09 by pferrete          #+#    #+#             */
/*   Updated: 2023/04/25 11:29:32 by paola            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

//return 0 if is not a character alphabetic, and 1 if it is
int		ft_isalpha(int c);
//return  0 if is not a digit, and 1 if is
int		ft_isdigit(int c);
//return 0 if is not a character alphanumeric, and 1 if it is
int		ft_isalnum(int c);
//return 0 if is not a character ascii, and 1 if it is
int		ft_isascii(int c);
//return 0 if is not printable, and 1 if it is
int		ft_isprint(int c);
//return the number of elements in string
size_t	ft_strlen(const char *str);
//return a copy of the modified string
void	*ft_memset(void *str, int value, size_t num);
/* retorn none. erases the data in the n
bytes of the memory starting at the location pointed */
void	ft_bzero(void *str, size_t n);
/*returns a pointer to dest. Copies n bytes from
memory area src to memory area dest*/
void	*ft_memcpy(void *dest, const void *src, size_t count);
//returns a pointer to dest
void	*ft_memmove(void *dest, const void *src, size_t n);
//returns the length of src
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
// returns the inicial length of dest plus the length of src
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);
//returns the convert letter or c if the convertion was not possible
int		ft_toupper(int c);
//returns the convert letter or c if the convertion was not possible
int		ft_tolower(int c);
/*return a pointer to the matched character
or null if the character is not found*/
char	*ft_strchr(const char *s, int c);
/*return a pointer to the matched character
or null if the character is not found*/
char	*ft_strrchr(const char *s, int c);
//returns an int less than, equal to, or greater than zero
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/*returns a pointer to the matching byte
or null if the caracter doesn't find*/
void	*ft_memchr(const void *ptr, int ch, size_t count);
//returns a pointer to the matching byte or null if the caracter doesn't find
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/*if little is empty returns big; if little doesn't
find returns null; returns a pointer to the first character*/
char	*ft_strnstr(const char *big, const char *little, size_t len);
/* convert int */
int		ft_atoi(const char *nptr);
/* return a pointer with dinamic memory*/
void	*ft_calloc(size_t nmemb, size_t size);
/*return a copy of string and use a malloc for memory allocated*/
char	*ft_strdup(const char *s);

#endif
