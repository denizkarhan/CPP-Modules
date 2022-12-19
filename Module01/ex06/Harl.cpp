#include "Harl.hpp"

void	Harl::debug(void)
{
    std::cout << "[ DEBUG ]\n" << "7XL-çift peynirli-üçlü turşu-özel-ketçaplı burgerime fazladan domuz pastır- ması yemeyi seviyorum. Gerçekten seviyorum!\n\n";
}
void	Harl::info(void)
{
    std::cout << "[ INFO ]\n" << "Ekstra domuz pastırması eklemenin daha fazla paraya mal olduğuna inanamıy- orum. Burgerime yeterince pastırma koymadınız! Yapsaydınız, daha fazlasını iste- mezdim!\n\n";
}
void	Harl::warning(void)
{
    std::cout << "[ WARNING ]\n" << "Bence bedavaya fazladan pastırma yemeyi hak ediyorum. Ben yıllardır geliyorum, sen geçen aydan beri burada çalışmaya başladın.\n\n";
}
void	Harl::error(void)
{
    std::cout << "[ ERROR ]\n" << "Bu kabul edilemez! Şimdi müdürle konuşmak istiyorum.\n\n";
}

void	Harl::complain(std::string level)
{
	int	i, a;
	std::string	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for(i = 0 ; i < 4 ; i++)
        if (level == str[i])
            a = i;

    switch (a)
    {
    case 0:
        debug();
        info();
        warning();
        error();
        break;
    case 1:
        info();
        warning();
        error();
        break;
    case 2:
        warning();
        error();
        break;
    case 3:
        error();
        break;
    default:
        break;
    }

	if (a == 4)
		std::cout << "[ Probably complaining about insignificant problems ]\n";
}
