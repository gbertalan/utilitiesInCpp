// Commented out, because only one main can be in a project. Uncomment to test.
#include <iostream>
#include <thread>
// for the timer:
#include <chrono>
using namespace std::chrono_literals;

void function1() {
	for (size_t i = 0; i < 200; i++)
		std::cout << "+";
}
void function2() {
	for (size_t i = 0; i < 200; i++)
		std::cout << "-";
}
void function3(char param) {
	for (size_t i = 0; i < 200; i++)
		std::cout << param;
}
void function4(int& param) {
	for (size_t i = 0; i < 200; i++) {
		param++;
		std::cout << param;
	}
}

int main() {

	std::thread worker1(function1);
	std::thread worker2(function2);
	std::thread workerParameterized(function3, 'a');
	int changingParam = 6;
	std::thread workerParameterized2(function4, std::ref(changingParam));


	worker1.join();// the main thread stops until these workers finish executing.
	worker2.join();
	workerParameterized.join();
	workerParameterized2.join();

	std::cout << std::endl << "Changed parameter: " << changingParam << std::endl;
	std::this_thread::sleep_for(5000ms);

	return 0;
}
