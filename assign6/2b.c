#include<stdio.h>
#include<string.h>

char *new_strcpy(char *dest, const char *sorc)
{
int i=0;
for(i=0 ; sorc[i] != '\0' ; i++)
	dest[i] = sorc[i];
	dest[i] = '\0';
return dest;
}


int main(void)
{
	char str1[20], str2[20];

printf("Enter the string:");
scanf("%[^\n]s", str1);

printf("str1 = %s\n", str1);
	new_strcpy(str2, str1);

	printf("str2 = %s\n", str2);

	return 0;
}

