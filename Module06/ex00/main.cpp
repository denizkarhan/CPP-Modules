#include "Convert.hpp"

static bool	is_valid(std::string &s){
    std::ostringstream s2;

	if (is_it_for_science(s))
		return (true);
	if (s.length() == 1 && isalpha(s[0])){
		s2 << static_cast<int>(s[0]);
		s = s2.str();
		return (true);
	}
	if (is_wrong_number(s))
		return (false);
	return (true);
}

int main(int ac, char **av)
{
	if (ac != 2){
		std::cerr << "Bad number of args" << std::endl;
		return (0);
	}
	std::string str = (std::string)av[1];
	if (is_valid(str))
		type_conversion(str);
	else
		std::cerr << "Invalid" << std::endl;
}
