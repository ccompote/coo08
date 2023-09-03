#pragma once

template <typename T>
T *finder(T intcont, int ig)
{
	for (int i = 0; i < intcont.size(); i++)
	{
		if (intcont[i] == ig)
			return (*intcont[i]);
	}
	return "";
}
