#ifndef holberton_h
#define holberton_h

int atoi(char *s);
int issqrt(int i, int s);
int _sqrt_recursion(int n);
int _pow_recursion(int x, int y);
int _strlen_recursion(char *s);
int factorial(int n);
void _print_rev_recursion(char *s);
void _puts_recursion(char *s);
void print_chessboard(char (*a)[8]);
void set_string(char **s, char *to);
char *_strpbrk(char *s, char *accept);
unsigned int _strspn(char *s, char *accept);
char *_strchr(char *s, char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
char *rot13(char *);
char *leet(char *);
char *cap_string(char *);
char *string_toupper(char *);
void reverse_array(int *a, int n);
int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
void print_array(int *a, int n);
void puts_half(char *str);
void puts2(char *str);
void rev_string(char *s);
void print_rev(char *s);
void _puts(char *str);
int _strlen(char *s);
void swap_int(int *a, int *b);
void reset_to_98(int *n);
void print_most_numbers(void);
void print_numbers(void);
void more_numbers(void);
int mul(int a, int b);
int _isdigit(int c);
int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
int add(int, int);
int _isupper(int c);

#endif
