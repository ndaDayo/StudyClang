#include <stdio.h>
#include <unistd.h>

int main(void) {
	char login_user[256];

	getlogin_r(login_user, sizeof(login_user));

	printf("ログインユーザー%s", login_user);

	return 0;
}
