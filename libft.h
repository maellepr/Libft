#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//-------------------------------------------------------------------------------------------
//	Macros pour la taille de l'espace de jeu (modifiables)
//	#define MAX_ROWS 3
//	#define MAX_COLS 3
//-------------------------------------------------------------------------------------------
//	#define MAX_I MAX_ROWS + 2
//	#define MAX_J MAX_COLS + 2
//-------------------------------------------------------------------------------------------
//	Prototypes des fonctions
	int	ft_isalpha(int c);
	int	ft_isdigit(int c);
	int	ft_isalnum(int c);
	int	ft_isascii(int c);
	int	ft_isprint(int c);
	int	ft_toupper(int c);
	int	ft_tolower(int c);

	size_t ft_strlen(const char *s);
    size_t  ft_strlcpy(char *dst, const char *src, size_t size);
    size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
    char * ft_strchr(const char *s, int c);
    char * ft_strrchr(const char *s, int c);
    int ft_strncmp(char *str1, char *str2, size_t n);
    char *   ft_strnstr(const char *haystack, const char *needle, size_t len);

	int ft_atoi(const char *str);
	
	void	ft_bzero(void *s, size_t n);
	void	*ft_memchr(const void *s, int c, size_t n);
	int	ft_memcmp(const void *s1, const void *s2, size_t n);
	void	*ft_memset(void *s, int c, size_t n);
	void	*ft_memcpy(void *dest, const void *src, size_t n);
	void	*ft_memmove(void *dest, const void *src, size_t n);

	void *calloc(size_t nmemb, size_t size);
	char *strdup(const char *s);

	char	*ft_substr(char const *s, unsigned int start, size_t len);
	char	*ft_strjoin(char const *s1, char const *s2);
	char *ft_strtrim(char const *s1, char const *set);

	void ft_putchar_fd(char c, int fd);
//-------------------------------------------------------------------------------------------
#endif