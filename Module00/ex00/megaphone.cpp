#include <iostream>

char    cpp_to_upper(char c)
{
    return (c - 32);
}

int main(int ac, char **av)
{
    int i = 0, j = -1;
    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    while (av[++i] && ac >= 2)
    {
        j = -1;
        while(av[i][++j])
            (av[i][j] <= 'z' && av[i][j] >= 'a') ? std::cout << cpp_to_upper(av[i][j]) : std::cout << av[i][j];
        if(av[i + 1])
            std::cout << " ";
    }
    return (0);
}
