/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:38:22 by dkarhan           #+#    #+#             */
/*   Updated: 2023/03/18 14:38:22 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <list>

class BitcoinExchange
{
    private:
        std::string fileName;

    public:
        BitcoinExchange();
        BitcoinExchange(std::string const &fileName);
        BitcoinExchange(BitcoinExchange const &btc);
        BitcoinExchange &operator=(BitcoinExchange const &btc);
        ~BitcoinExchange();

        std::string const &getFileName() const;

        std::list<std::string> btc_data;

        void    dataAdderToList();
};

#endif
