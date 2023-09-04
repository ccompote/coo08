#include "easyfind.hpp"

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
		
		std::cout << "Value " << tofind << " found at index: " << std::distance(cont.begin(), res) << std::endl;

		int tofindnot = 0;
		res = finder(cont, tofindnot);
		std::cout << "Value " << tofind << " found at index: " << std::distance(cont.begin(), res) << std::endl;

	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return (0);
}