#include <iostream>
#include <fstream>
#include <string>

void    check(std::string str, char **av)
{
    std::ofstream	outfile;
	std::string		first;
	std::string		sec;
	int				pos;

	first = std::string(av[2]);
	sec = std::string(av[3]);
	outfile.open((std::string)av[1] + ".replace");
	for (int i = 0;i < (int)str.length(); i++){
		pos = str.find(first, i);
		if (pos != -1 && pos == i){
			outfile << sec;
			i += first.size() - 1;
		}
		else
			outfile << str[i];
	}
	outfile.close();
}

int main(int ac, char **av)
{
    std::ifstream   infile;
    std::string     str;
    char            single;

    if (ac != 4)
	{
		std::cerr << "Wrong number of arguments." << std::endl << "->./exe FileName old_text new_text" << std::endl;
		return (1);
	}
    infile.open(av[1]);
    if (infile.fail())
    {
		std::cerr << av[1] << "no such file or directory" << std::endl;
		return (1);
	}
    while (!infile.eof() && infile >> std::noskipws >> single)
        str += single;
    infile.close();
    check(str, av);
    return (0);
}
