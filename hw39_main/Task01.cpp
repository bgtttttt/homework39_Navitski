#include <iostream>
#include <time.h>
#include <string>

#define n 3

using namespace std;


string matrToString(int matrix[n][n]);
bool isNullMatrix(int matrix[n][n]);
bool isDiagMatrixGenDiag(int matrix[n][n]);
bool isDiagMatrixSideDiag(int matrix[n][n]);
bool isUnifiedMatrixGenDiag(int matrix[n][n]);
bool isUnifiedMatrixSideDiag(int matrix[n][n]);


int main() {
	int Matrix[n][n] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int NullMatrix[n][n] = {
		{0,0,0},
		{0,0,0},
		{0,0,0}
	};
	int DiagMatrix1[n][n] = {
		{1,0,0},
		{0,3,0},
		{0,0,2}
	};
	int UnifiedMatrix1[n][n] = {
		{1,0,0},
		{0,1,0},
		{0,0,1}
	};
	int DiagMatrix2[n][n] = {
		{0,0,1},
		{0,3,0},
		{2,0,0}
	};
	int UnifiedMatrix2[n][n] = {
		{0,0,1},
		{0,1,0},
		{1,0,0}
	};

	cout << "1)Matrix:\n" << matrToString(Matrix) << "\n";
	cout << "2)Null matrix:\n" << matrToString(NullMatrix) << "\n";
	cout << "3)Diagonal matrix gen diag:\n" << matrToString(DiagMatrix1) << "\n";
	cout << "4)Diagonal matrix side diag:\n" << matrToString(DiagMatrix2) << "\n";
	cout << "5)Unified matrix gen diag:\n" << matrToString(UnifiedMatrix1) << "\n";
	cout << "6)Unified matrix side diag:\n" << matrToString(UnifiedMatrix2) << "\n";

	string msg;
	msg = isNullMatrix(Matrix) ? "True" : "False";
	cout << "1 is Null Matrix?\n" << msg << "\n";
	msg = isNullMatrix(NullMatrix) ? "True" : "False";
	cout << "2 is Null matrix?\n" << msg << "\n";
	msg = isDiagMatrixGenDiag(DiagMatrix1) ? "True" : "False";
	cout << "3 is Diagonal matrix gen diag?\n" << msg << "\n";
	msg = isDiagMatrixSideDiag(DiagMatrix2) ? "True" : "False";
	cout << "4 is Diagonal matrix side diag?\n" << msg << "\n";
	msg = isUnifiedMatrixGenDiag(UnifiedMatrix1) ? "True" : "False";
	cout << "5 is Unified matrix gen diag?\n" << msg << "\n";
	msg = isUnifiedMatrixSideDiag(UnifiedMatrix2) ? "True" : "False";
	cout << "5 is Unified matrix side diag?\n" << msg << "\n";
	
}
