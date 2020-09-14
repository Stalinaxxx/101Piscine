int     ft_putchar(char c);

int     main()
{
    int nombre_alphabet;

    nombre_alphabet = 97;
    while (nombre_alphabet <= 122)
    {
        ft_putchar(nombre_alphabet);
        nombre_alphabet++;
    }

    return (0);
}