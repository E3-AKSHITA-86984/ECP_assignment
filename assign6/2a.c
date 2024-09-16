#include<stdio.h>
#include<stdio.h>
size_t new_strlen(const char *s)
{
	size_t length = 0;
	for(int i = 0 ; s[i] != '\0' ; i++)
		length++;
	return length;
}

int main()
{
	char str[20];
	size_t len;

	printf("Enter the string:");
	scanf("%[^\n]s", str);

	printf("str = %s\n", str);
	len = new_strlen(str);
	printf("length = %d\n", len);


	return 0;
}
