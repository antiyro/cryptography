#include "rot.h"

void	encrypt(void)
{
	char message[101];

	printf(SPARK);
	printf("Enter your message (max 100 caracters) >_ ");
    
	fgets(message, sizeof message, stdin);
	message[ft_strlen(message) - 1] = '\0';
}

int main(int argc, char **argv)
{
    printf("\n");
	system("cat banner.txt"); //Change the location if needed
    printf("\n");
    printf("\n");
    int		entry;
    int		error;

    error = 1;
    printf(BOLDWHITE);
	printf("Welcome to the ROT16 encryptor !\n\n");
	printf("1. Encrypt a message\n");
	printf("2. Decrypt a message\n");
	printf("3. Quit\n\n");
	printf(SPARK);
	printf("Enter value >_ ");
    printf(RESET);
	scanf("%d", &entry);
	printf("\n");
	printf(BOLDWHITE);
	while (error)
	{
		switch(entry)
		{
			case 1:
			{
				encrypt();
				error = 0;
			}
			break;
			case 2:
			{
				printf("You choosed the 2");
				error = 0;
			}
			break;
			case 3:
			{
				printf("See you soon !\n");
				error = 0;
			}
			break;
			default:
			printf("Please choose an existing number");
			break;
        }
	}
		return (0);
}