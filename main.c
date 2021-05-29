#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>

int
main(int argc, char *argv[])
{
	struct winsize w;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
	printf("%d %d", w.ws_col, w.ws_row);
	return 0 ;
}
