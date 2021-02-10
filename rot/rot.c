#include "rot.h"


void	ft_rot(char *message, int rot_key)
{
	int i;
	char *str;
	int rot_div;

	rot_div = rot_key / 26;
	rot_key = rot_key - (rot_div * 26);
	if (!(str = malloc(sizeof(char) * ft_strlen(message) + 1)))
		return ;
	while (message[i])
	{
		if (message[i] >=  97 && message[i] <= 97 + rot_key)
			str[i] = message[i] - rot_key;
		else if (message[i] >=  97 + rot_key && message[i] <= 122)
			str[i] = message[i] + rot_key;
		else if (message[i] >=  65 && message[i] <= 65 + rot_key)
			str[i] = message[i] - rot_key;
		else if (message[i] >=  65 + rot_key && message[i] <= 90)
			str[i] = message[i] + rot_key;
		else 
			str[i] = message[i];
		i++;
	}
	ft_putstr("Your encrypted message is : ");
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_encrypt(void)
{
	char message[51];
	int rot_key;
	//printf(SPARK);
	ft_putstr("Enter your message (max 100 caracters) >_ ");
	ft_clean_stdin();
    readinput(message, 51);
	ft_putstr("\nEnter your rotation key : ");
	scanf("%d", &rot_key);
	ft_rot(message, rot_key);
}

int main(int argc, char **argv)
{
   /* printf("\n");
	//system("cat banner.txt"); //Change the location if needed
    printf("\n");
    printf("\n");*/
    int		entry;
    int		error;

    error = 1;
    //printf(BOLDWHITE);
	ft_putstr("Welcome to the ROT16 encryptor !\n\n");
	ft_putstr("1. Encrypt a message\n");
	ft_putstr("2. Decrypt a message\n");
	ft_putstr("3. Quit\n\n");
	//printf(SPARK);
	ft_putstr("Enter value >_ ");
    //printf(RESET);
	scanf("%d", &entry);
	ft_putstr("\n");
	//printf(BOLDWHITE);
	while (error)
	{
		switch(entry)
		{
			case 1:
			{
				ft_encrypt();
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