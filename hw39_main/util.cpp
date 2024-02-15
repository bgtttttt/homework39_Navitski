#include <iostream>
#include <string>

#define n 3

using namespace std;

string matrToString(int matrix[n][n]) {
	string s = "";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			s = s + to_string(matrix[i][j]) + "\t";
		}
		s += "\n";
	}
	return s;
}
bool isNullMatrix(int matrix[n][n]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (matrix[i][j] != 0) {
				return false;
			}
		}
	}
	return true;
}
bool isDiagMatrixGenDiag(int matrix[n][n]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (matrix[i][j] != 0 && i != j) {
				return false;
			}
		}
	}
	return true;
}
bool isDiagMatrixSideDiag(int matrix[n][n]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (matrix[i][j] != 0 && i + j != n - 1) {
				return false;
			}
		}
	}
	return true;
}
bool isUnifiedMatrixGenDiag(int matrix[n][n]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((matrix[i][j] != 0 && i != j) || (matrix[i][j] != 1 && i == j)) {
				return false;
			}
		}
	}
	return true;
}
bool isUnifiedMatrixSideDiag(int matrix[n][n]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((matrix[i][j] != 0 && i + j != n - 1) || (matrix[i][j] != 1 && i + j == n - 1)) {
				return false;
			}
		}
	}
	return true;
}