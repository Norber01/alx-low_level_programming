#include <stdio.h>
int main(void) {
	char str[] = "_putcher";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		putchar(str[ch]);
	putchar('\n');
	return (0);
}
