#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define PASSWORD_LENGTH 10

/**
 * main - Generates random valid passwords for the
 * program 101-crackme.
 * Return: Always 0.
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];

	srand(time(NULL));
	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = (char)(rand() % (126 - 33 + 1) + 33);
	}
	password[PASSWORD_LENGTH] = '\0';
	printf("Random password: %s\n", password);
	return (0);

	char password[84];
	int index = 0, sum = 0, diff_half1, diff_half2;

	srand(time(0));
	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}
	password[index] = '\0';
	if (sum != 2772)
	{
		diff_half1 = (sum - 2772) / 2;
		diff_half2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			diff_half1++;
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff_half1))
			{
				password[index] -= diff_half1;
				break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff_half2))
			{
				password[index] -= diff_half2;
			break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
