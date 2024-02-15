#include <iostream>
#include <time.h>

using namespace std;


bool isPrime1(int num);
bool isPrime2(int num);
bool isPrime3(int num);


int main() {
	int num = 2147483647;
	long long start = 0, end = 0;
	string msg;
	
	start = time(0);
	msg = isPrime1(num)?"It's prime number":"It isn't prime number";
	end = time(0);
	cout << msg << "\n" << "Time: " << (end - start) << "\n";

	start = time(0);
	msg = isPrime2(num) ? "It's prime number" : "It isn't prime number";
	end = time(0);
	cout << msg << "\n" << "Time: " << (end - start) << "\n";

	start = time(0);
	msg = isPrime3(num) ? "It's prime number" : "It isn't prime number";
	end = time(0);
	cout << msg << "\n" << "Time: " << (end - start) << "\n";

	

}
