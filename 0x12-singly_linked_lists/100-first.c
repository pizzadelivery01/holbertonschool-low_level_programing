#include <stdio.h>
void pre_main(void) __attribute__ ((constructor));
/**
 * pre_main - print text
 */
void pre_main(void)
{
	printf("[%s]";
"You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
