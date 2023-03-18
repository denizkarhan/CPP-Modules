/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:38:40 by dkarhan           #+#    #+#             */
/*   Updated: 2023/03/18 15:18:48 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iomanip> 

void	merge_vector(std::vector<int>& my_vec, int left, int middle, int right) {
    int i, j, k;
    int n1 = middle - left + 1;
    int n2 = right - middle;

    std::vector<int> L(n1), R(n2);

    for (i = 0; i < n1; i++)
        L[i] = my_vec[left + i];
    for (j = 0; j < n2; j++)
        R[j] = my_vec[middle + 1 + j];

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            my_vec[k] = L[i++];
        else
            my_vec[k] = R[j++];
        k++;
    }

    while (i < n1)
        my_vec[k++] = L[i++];

    while (j < n2)
        my_vec[k++] = R[j++];
}

void	mergeSort_vector(std::vector<int>& my_vec, int left, int right) {
    if (left < right)
	{
        int middle = left + (right - left) / 2;

        mergeSort_vector(my_vec, left, middle);
        mergeSort_vector(my_vec, middle + 1, right);

        merge_vector(my_vec, left, middle, right);
    }
}

void	printVector(std::vector<int> &my_vec) {
    for (int i = 0; i < my_vec.size(); i++)
        std::cout << my_vec[i] << " ";
    std::cout << std::endl;
}

void	numberSendToVector(char **argv, std::vector<int> *my_vec) {
    int i = -1;
    while (argv[++i])
	{
        if (std::stoi(argv[i]) < 0)
		{
			std::cout << "Error" << std::endl;
			exit(0);
		}
		else
			my_vec->push_back(std::stoi(argv[i]));
	}
}


void	merge_map(std::map<int, int>& my_map, int left, int middle, int right) {
    int i, j, k;
    int n1 = middle - left + 1;
    int n2 = right - middle;

    std::map<int, int> L, R;

    for (i = 0; i < n1; i++)
        L[i] = my_map[left + i];
    for (j = 0; j < n2; j++)
        R[j] = my_map[middle + 1 + j];

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            my_map[k] = L[i++];
        else
            my_map[k] = R[j++];
        k++;
    }

    while (i < n1)
        my_map[k++] = L[i++];

    while (j < n2)
        my_map[k++] = R[j++];
}

void	mergeSort_map(std::map<int, int>& my_map, int left, int right) {
    if (left < right)
	{
        int middle = left + (right - left) / 2;

        mergeSort_map(my_map, left, middle);
        mergeSort_map(my_map, middle + 1, right);

        merge_map(my_map, left, middle, right);
    }
}

void	printMap(std::map<int, int> &my_map) {
    for (int i = 0; i < my_map.size(); i++)
        std::cout << my_map[i] << " ";
    std::cout << std::endl;
}

void	numberSendToMap(char **argv, std::map<int, int> *my_map) {
	int	i = -1;
	while (argv[++i])
	{
		if (std::stoi(argv[i]) < 0)
		{
			std::cout << "Error" << std::endl;
			exit(0);
		}
		else
			my_map->insert(std::pair<int, int>(i, std::stoi(argv[i])));
	}
}


int main(int argc, char **argv)
{
	mergeSortVector my_vector;
    mergeSortMap my_map;
	clock_t start_time_vector, start_time_map, end_time_vector, end_time_map;
	double duration_vector, duration_map;
    int totalElement = argc - 1;

    if (argc > 1)
    {
		// --------- Vector sorter ---------
		start_time_vector = clock();
		numberSendToVector(&argv[1], &my_vector.vector);
        std::cout << "Before:	"; printVector(my_vector.vector);
	 	mergeSort_vector(my_vector.vector, 0, totalElement - 1);
        std::cout << "After:	"; printVector(my_vector.vector);
		end_time_vector = clock();
		duration_vector = double(end_time_vector - start_time_vector) / CLOCKS_PER_SEC;

		// --------- Map sorter ---------
		start_time_map = clock();
        numberSendToMap(&argv[1], &my_map.map);
        // std::cout << "Before:	"; printMap(my_map.map);
	 	mergeSort_map(my_map.map, 0, totalElement - 1);
        // std::cout << "After:	"; printMap(my_map.map);
		end_time_map = clock();
		duration_map = double(end_time_map - start_time_map) / CLOCKS_PER_SEC;

		std::cout << "Time to process a range of " << totalElement << " elements with std::vector : " << std::fixed << duration_vector << " us" << std::endl;
		std::cout << "Time to process a range of " << totalElement << " elements with std::map :    " << std::fixed << duration_map << " us" << std::endl;
    }
    else
        std::cout << "Error" << std::endl;
}
