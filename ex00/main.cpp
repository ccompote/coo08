#include "easyfind.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>

int main(void)
{
	try
	{
		std::vector<int> cont;
		cont.push_back(1);
		cont.push_back(2);
		cont.push_back(3);
		cont.push_back(4);
		cont.push_back(5);

		int tofind = 3;
		std::vector<int>::iterator res = finder(cont, tofind);
		
		std::cout << "Value " << tofind << " found at index: " << 
	}

}