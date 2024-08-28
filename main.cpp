#define DEBUG
#ifdef DEBUG
#include <iostream>
#include <array>

void PrintArray(const std::array< int, 5>& array_)
{
	for (int i = 0; i < array_.size(); i++)
	{
		std::cout << array_[i] << std::endl;
	}
}
int main()
{
	std::array<int, 5> data;
	data[0] = 2;
	data[2] = 1;
	PrintArray(data);

}



#endif // DEBUG
