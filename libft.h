#include <string.h>
void	ft_putchar(char c);
void	ft_putstr(char* str);
char	*ft_strcpy(char *dest, const char *src);
int	ft_strcmp(const char *s1, const char *s2);
void	ft_putnbr(int n);
char	*ft_strdup(const char *s);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
int	ft_strlen(const char *s);
char	*ft_strncat(char *dest, const char *src, size_t n);
int     ft_atoi(const char *nptr);
void    *ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, int nbyte);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memccpy(void *dest, const void *src, int c, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
void	*ft_memalloc(size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
