#pragma once

#include <iostream>
#include <stdexcept>
#include <vector>

template <typename T>
typename T::iterator finder(T &intcont, int ig)
{
	typename T::iterator it = std::find(intcont.begin(), intcont.end(), value);
	if (it == intcont.end())
		throw std::runtime_error("Value not found");
	return it;
}
