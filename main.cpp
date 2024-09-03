#define DEBUG
#ifdef DEBUG
#include <iostream>
#include <array>
#include <string>
#include <thread>
#include <chrono>

#include "calculator.h"

static bool s_Finsh = false;

void PrintArray(const std::array< int, 5>& array_)
{
	for (int i = 0; i < array_.size(); i++)
	{
		std::cout << array_[i] << std::endl;
	}
}

struct Timer
{
	std::chrono::time_point<std::chrono::steady_clock> start, end;
	std::chrono::duration<float> duration;
	Timer()
	{
		start = std::chrono::high_resolution_clock::now();
	}

	~Timer()
	{
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;

		float ms = duration.count() * 1000.0f;
		std::cout << "Timer took" << ms << "ms" << std::endl;

	}
};

void DoWork()
{
	Timer timer;
	using namespace std::literals::chrono_literals;

	while (!s_Finsh) {
		std::cout << "hello";
		std::this_thread::sleep_for(1s);
		std::cin.get();
	}
}

int main()
{
	//std::array<int, 5> data;
	//data[0] = 2;
	//data[2] = 1;
	//PrintArray(data);
	using namespace std::literals::chrono_literals;

	auto start = std::chrono::high_resolution_clock::now();
	std::this_thread::sleep_for(1s);
	auto end = std::chrono::high_resolution_clock::now();

	std::chrono::duration<float> duration = end - start;
	std::cout << duration.count() << "s" << std::endl;






	std::thread worker(DoWork);

	worker.join();


	Calculator cal;
	std::string line;
	std::getline(std::cin, line);
	cal.explain(line);
	cal.show();
	std::cin.get();
	

}



#endif // DEBUG
