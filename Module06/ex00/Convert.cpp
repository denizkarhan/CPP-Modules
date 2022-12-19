#include "Convert.hpp"

bool is_wrong_number(std::string &s){
	size_t	i;

	if ((s[0] == '-' || s[0] == '+'))
		if ((std::count(s.begin(), s.end(), '-') + std::count(s.begin(), s.end(), '+')) != 1)
			return (true);
	if ((std::count(s.begin(), s.end(), 'f') > 1 || std::count(s.begin(), s.end(), '.') > 1) ||
		(std::count(s.begin(), s.end(), 'f') == 1 && s[s.size() - 1] != 'f'))
		return (true);
	for (i = 0 ; i < s.size() ; i++)
		if (!isdigit(s[i]) && s[0] != '-' && s[0] != '+' && (s[i] != 'f') && s[i] != '.')
			return (true);
	return (false);
}

bool is_it_for_science(std::string &s){
	return (s == "nan" || s == "nanf" || s == "-inf" || s == "inf" || s == "+inf" || s == "-inff" || s == "inff" || s == "+inff");
}

static void	converter_to_char(std::string &str){
	char c = static_cast<char>(std::atoi(str.c_str()));

    if (is_it_for_science(str))
        std::cout << "impossible" << std::endl;
	else if (c < 32 || c > 126)
		std::cout << "Non displayable" << std::endl;
	else
        std::cout << "'" << c << "'" << std::endl;
}

static void	converter_to_int(std::string &str){
	if (is_it_for_science(str))
		std::cout << "impossible" << std::endl;
    else
    	std::cout << std::atoi(str.c_str()) << std::endl;
}

static void	converter_to_float(std::string &str){
	float number = std::strtof(str.c_str(), 0);

	if (number == static_cast<int>(number))
		std::cout << number << ".0f" << std::endl;
    else
    	std::cout << number << "f" << std::endl;
}

static void	converter_to_double(std::string &str){
	double number = std::strtod(str.c_str(), 0);

	if (number == static_cast<int>(number))
		std::cout << number << ".0" << std::endl;
    else
    	std::cout << number << std::endl;
}

void type_conversion(std::string str){
	std::cout << "char: ", converter_to_char(str);
	std::cout << "int: ", converter_to_int(str);
	std::cout << "float: ", converter_to_float(str);
	std::cout << "double: ", converter_to_double(str);
}
