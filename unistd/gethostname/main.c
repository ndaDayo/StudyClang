#include <stdio.h>
#include <unistd.h>

int main(viod) {
	char hostname[128];

	gethostname(hostname, sizeof(hostname));

	printf("ใในใๅ  %s", hostname);

	return 0;
}
