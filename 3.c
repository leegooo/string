#include <stdio.h>
#include <string.h>
int main()
{
	char src[]="  abc  defg     z  a  b  c  d  d";
	char des[1024]={0};
	int i , j = 0, flag = 0;
	for (i = 0; i<strlen(src); i++)
	{
			if (src[i] == ' '){
					continue;	
			}

		des[j] = src[i];
		j++;
	}
	printf("%s\n", des);
	return 0;
}
