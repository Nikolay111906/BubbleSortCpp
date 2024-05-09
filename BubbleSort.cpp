#include <iostream>

using namespace std;

void readArray(int arr[], int size) {
	cout << "Enter " << size << " numbers to fill the array: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

void sortArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printArray(const int arr[], int size) {
	cout << "Array in sorted form: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	const int SIZE = 10;
	int digitals[SIZE];

	readArray(digitals, SIZE);
	sortArray(digitals, SIZE);
	printArray(digitals, SIZE);

	return 0;
}
