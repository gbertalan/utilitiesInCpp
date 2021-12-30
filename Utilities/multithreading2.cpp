/*
#include <iostream>
#include <thread>
#include <map>
// for the timer:
#include <chrono>
using namespace std::chrono_literals;

void RefreshForecast(std::map<std::string, int> forecastMap) {

	while (true) {
		for (auto& item : forecastMap) {
			item.second++;
			std::cout << item.first << " - " << item.second << std::endl;
		}
		std::this_thread::sleep_for(2000ms);
	}
}

int main() {

	std::map<std::string, int> forecastMap = {
		{"New York", 15},
		{"Mumbai", 20},
		{"Berlin", 18}
	};

	std::thread backgroundWorker(RefreshForecast, forecastMap);

	backgroundWorker.join(); // instead of this, we can use the following:
	// system("pause>nul"); // but this is platform dependent. and bad practice.

	return 0;
}
*/