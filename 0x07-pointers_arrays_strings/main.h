/**
 * _putchar - print single char
 * _memset - fills the first n bytes of the memory area pointed to by s with the constant byte b
 * _memcpy - copies n bytes from memory area src to memory area dest
 * _strchr - Returns a pointer to the first occurrence of the character c in the string s, or NULL
 * _strspn - Returns the number of bytes in the initial segment of s which consist only of bytes from accept
 * _strpbrk - Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL
 * _strstr - Returns a pointer to the beginning of the located substring, or NULL if the substring is not found
 * print_chessboard - print the position of pecies on a chess board
 * print_diagsum - print sum of matix diagonal
 *
 */
int _putchar(char c);

char *_memset(char *s, char b, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept);

char *_strpbrk(char *s, char *accept);

char *_strstr(char *hatstack, char *needle);

void print_chessboard(char (*a)[8]);

void print_diagsum(int *a, int size);

