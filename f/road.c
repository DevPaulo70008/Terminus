#include <stdio.h>

#include <stdlib.h>

//#include <"v.h">

int main(void)
{
	system("sh direct.sh");
	system("sh banner.sh");
	
	 int value_shell;
	while (value_shell)
	{
		system("sh u.sh");
		char shell_program[1000];
		fgets(shell_program, 1000, stdin);
		system(shell_program);
	}

return 0;
}
