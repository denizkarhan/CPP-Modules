#include "Harl.hpp"

void	Harl::debug(void)
{
    std::cout << "7XL-çift peynirli-üçlü turşu-özel-ketçaplı burgerime fazladan domuz pastır- ması yemeyi seviyorum. Gerçekten seviyorum!\n";
}
void	Harl::info(void)
{
    std::cout << "Ekstra domuz pastırması eklemenin daha fazla paraya mal olduğuna inanamıy- orum. Burgerime yeterince pastırma koymadınız! Yapsaydınız, daha fazlasını iste- mezdim!\n";
}
void	Harl::warning(void)
{
    std::cout << "Bence bedavaya fazladan pastırma yemeyi hak ediyorum. Ben yıllardır geliyorum, sen geçen aydan beri burada çalışmaya başladın.\n";
}
void	Harl::error(void)
{
    std::cout << "Bu kabul edilemez! Şimdi müdürle konuşmak istiyorum.\n";
}

void	Harl::control(std::string level)
{
	void		(Harl::*functions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0 ;  i < 4 ; i++)
		if (str[i] == level)
			(this->*functions[i])();
}
