#include "rot.h"

void ft_clean_stdin(void)
{
    int c;

    while (c != '\n' && c != EOF)
        c = getchar();
}

int     ft_isequal(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i])
    {
        if (s1[i] != s2[i])
            return (0);
        i++;
    }
    if (s2[i] != '\0')
        return (0);
    return (1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

void CleanBuffer()
{
    int c = 0;
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}
 
int readinput(char *chaine, int longueur)
{
    char *positionEntree = NULL;
 
    if (fgets(chaine, longueur, stdin) != NULL)
    {
        positionEntree = strchr(chaine, '\n');
        if (positionEntree != NULL)
        {
            *positionEntree = '\0';
        }
        else
        {
            CleanBuffer();
        }
        return 1;
    }
    else
    {
        CleanBuffer();
        return 0;
    }
}