#include <iostream>

using namespace std;

bool isPrime1(int num) {
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
bool isPrime2(int num) {
	for (int i = 2; i < num / 2; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
bool isPrime3(int num) {
	for (int i = 2; i < sqrt(num); i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}