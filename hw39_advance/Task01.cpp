#include <iostream>

using namespace std;

int sumOfSquares(int num) {
    int sum = 0;
    while (num) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}

bool isHappy(int num) {
    while (true) {
        if (num == 1) {
            return true;
        }
        else if (num == 4) {
            return false;
        }
        num = sumOfSquares(num);
    }
}

int main() {
    int num;
    cout << "Input number:\n";
    cin >> num;
    if (isHappy(num)) {
        cout << "Number " << num << " is lucky.\n";
    }
    else {
        cout << "Number " << num << " isn't lucky.\n";
    }
    return 0;
}