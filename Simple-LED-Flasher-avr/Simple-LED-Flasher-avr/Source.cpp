#include <iostream>
#include <conio.h>
using namespace std;

void single_rtl(int arr[]) {
	for (int i = 0; i < 8; i++) {
		for (int i = 0; i < 8; i++)
			arr[i] = 0;

		arr[i] = 1;	// 7 - i

		for (int i = 0; i < 8; i++)
			cout << arr[i];	// enter pin

		cout << endl;	// just to see output
	}
}

void full_rtl(int arr[]) {
	for (int i = 0; i < 8; i++) {

		arr[i] = 1;	// 7 - i

		for (int i = 0; i < 8; i++)
			cout << arr[i];	// enter pin

		cout << endl;	// just to see output
	}
}

void twoside(int arr[]) {
	for (int i = 0; i < 4; i++) {

		arr[i] = 1;
		arr[7 - i] = 1;

		for (int i = 0; i < 8; i++)
			cout << arr[i];	// enter pin

		cout << endl;	// just to see output
	}

	//for (int i = 0; i < 4; i++) {

	//	arr[i] = 0;
	//	arr[7 - i] = 0;

	//	for (int i = 0; i < 8; i++)
	//		cout << arr[i];	// enter pin

	//	cout << endl;	// just to see output
	//}

	for (int i = 0; i < 4; i++) {

		arr[i + 4] = 0;
		arr[3 - i] = 0;

		for (int i = 0; i < 8; i++)
			cout << arr[i];	// enter pin

		cout << endl;	// just to see output
	}
}

void odd(int arr[]) {
	for (int i = 0; i < 8; i += 2)
		arr[i] = 1;

	for (int i = 0; i < 8; i++)
		cout << arr[i];	// enter pin

	cout << endl;	// just to see output

	for (int i = 0; i < 8; i++)
		arr[i] = 0;

	for (int i = 1; i < 8; i += 2)
		arr[i] = 1;

	for (int i = 0; i < 8; i++)
		cout << arr[i];	// enter pin
}

void fill(int arr[]) {	// not working!

	for (int i = 0; i < 8; i++) {
		for (int i = 0; i < 8; i++) {
			arr[i] = 0;
		}

		arr[i] = 1;

		for (int i = 0; i < 8; i++)
			cout << arr[i];	// enter pin

		cout << endl;	// just to see output
	}
}

void main() {

	int arr[8] = { 0 };

	// single_rtl(arr);

	// full_rtl(arr);

	// twoside(arr);

	// odd(arr);

	fill(arr);

	_getch();
}
