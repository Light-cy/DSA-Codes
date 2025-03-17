#include<iostream>
using namespace std;
template <class t>
bool compareValues(t a, t b) {
	if (a == b) {
		return true;
	}
	else {
		return false;
	}
}
template<class t>
bool compareValues(const t* a, const t* b, const int& size1, const int& size2) {
	if (size1 == 0 || size2 == 0) {
		cout << "\nAn array is empty.";
		return false;
	}
	if (size1 != size2) {
		cout << "\narray are of different sizes";
	}
	else {
		for (int i = 0; i < size1; i++) {
			if (a[i] != b[i]) {
				return false;
			}
		}
		return true;
	}

}
template <class t>
bool compareValues( t** a,  t** b, const int& r1, const int& c1, const int& r2, const int& c2) {
	if (r1 == 0 || r2 == 0 || c1 == 0 || c2 == 0) {
		cout << "A matrix is empty";
		return false;
	}
	if ((r1 != r2) || (c1 != c2)) {
		cout << "\nmatrices are not of same size";
	}
	else {
		for (int i = 0; i < r1; i++) {
			for (int j = 0; j < c1; j++) {
				if (a[i][j] != b[i][j]) {
					return false;
				}
			}
		}
		return true;
	}
}
int main() {
	int a = 5, b = 5;
	float a1 = 5.5, b1 = 6.6;
	string a2 = "ali", b2 = "ali";
	//simple integars, floats, strings
	if (compareValues(a, b)) {
		cout << "\nintegars are equal.";
	}
	else {
		cout << "\ninetagers are not equal.";
	}
	if (compareValues(a1, b1)) {
		cout << "\nfloats are equal.";
	}
	else {
		cout << "\nfloats are not equal.";
	}
	if (compareValues(a2, b2)) {
		cout << "\nstring are equal.";
	}

	//arrays of integars float and strings
	int arr[2] = { 1,2 }, arr2[2] = { 1,2 };
	float f1[2] = { 2.2,3.3 }, f2[2] = { 2.2,3.3 };
	string s1[2] = { "ali","asad" }, s2[2] = { "ali","aslm" };
	if (compareValues(arr, arr2, 2, 2)) {
		cout << "\nintegar array 1 and 2 are equal";
	}
	else {
		cout << "\nintegar array 1 and 2 are not equal";
	}
	if (compareValues(f1, f2, 2, 2)) {
		cout << "\nfloat array 1 and 2 are equal";
	}
	else {
		cout << "\nfloat array 1 and 2 are not equal";
	}
	if (compareValues(s1, s2, 2, 2)) {
		cout << "\nstring array 1 and 2 are equal";
	}
	else {
		cout << "\nstring array 1 and 2 are not equal";
	}

	//2d array inetegar

	int** i_2d1 = new int* [2];
	i_2d1[0]=arr;
	i_2d1[1] = arr2;
	int** i_2d2 = new int* [2];
	i_2d2[0] = arr;
	i_2d2[1] = arr2;
	if (compareValues(i_2d1, i_2d2, 2, 2, 2, 2)) {
		cout << "\ntwo matrices are equal.";
	}
	else {
		cout << "\ntwo matrices are not equal";
	}
}
