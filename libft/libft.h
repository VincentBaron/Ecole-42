#ifndef LIBFT_H
# define LIBFT_H

int ft_strlen(const char *s);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, int n);
int ft_strlcpy(char *dst, const char *src, int size);

# endif
