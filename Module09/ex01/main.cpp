/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:38:33 by dkarhan           #+#    #+#             */
/*   Updated: 2023/03/18 15:00:33 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/* RPN (Reverse Polish Notation) */
int calculate(int num1, int num2, char op)
{
    if (op == '+')
        return num1 + num2;
    else if (op == '-')
        return num1 - num2;
    else if (op == '*')
        return num1 * num2;
    else if (op == '/')
    {
        if (num2 == 0)
        {
            std::cout << "Error: divide by 0!" << std::endl;
            exit (1);
        }
        return num1 / num2;
    }
    else
        return 0;
}

int start_proccess(char *args)
{
    RPN my_stack;
    int num1, num2, result, i = -1;

    while (args[++i])
    {
        if ((args[i] == '+' || args[i] == '-' || args[i] == '*' || args[i] == '/'))
        {
            if (my_stack.stack.size() < 2)
            {
                std::cout << "Error: missing numbers!" << std::endl;
                exit(1);
            }
            num2 = my_stack.stack.top();
            my_stack.stack.pop();
            num1 = my_stack.stack.top();
            my_stack.stack.pop();
            result = calculate(num1, num2, args[i]);
            my_stack.stack.push(result);
        }
        else if (args[i] >= '0' && args[i] <= '9')
        {
            int operand = args[i] - 48;
            my_stack.stack.push(operand);
        }
        else if (args[i] != ' ')
        {
                std::cout << "Error" << std::endl;
                exit(1);
        }
    }
    return my_stack.stack.top();
}

int main(int argc, char **argv)
{
    if (argc == 2)
        std::cout << start_proccess(argv[1]) << std::endl;
    else
        std::cout << "Error: you always 2 argument entry!" << std::endl;
    return 0;
}
