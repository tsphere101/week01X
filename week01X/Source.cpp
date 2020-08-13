#include <stdio.h>
int main()
{
	int age;
	char userName[100];
	printf("What is your name? \n");
	gets_s(userName, 100);

	printf("How old are you?\n");
	scanf_s("%d",&age);
	if (age > 0) {

		printf("Hello %s!\nYou are %d years old!\n", userName, age);

		if (age >= 18) { printf("You are allowed!\n"); }
		else if (age < 18) { printf("You are not allowed!\n"); }
		else printf("Error!");
	}
	else { printf("You are not Human!"); }

	return 0;
}