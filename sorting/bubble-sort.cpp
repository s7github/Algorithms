#include <iostream>
#include <cstdlib>

using namespace std;

void swap(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void printArr(int* arr, int size) {	
	cout << "[";
	for (int i=0; i<size; i++) {
		cout << arr[i];
		if (i < size-1) cout << ", ";
	}
	cout << "]";
}

int main() {
	int * arr;
	int size;
	bool swapped = false;
	
	cout << "Enter the array size: ";
	cin >> size;
	
	arr = (int*) malloc (sizeof(int)*size);
	cout << "Enter array elements: " << endl;
	for (int i=0; i<size; i++) {
		cin >> arr[i];
	}
	
	cout << "Sort starts..." << endl;
	printArr(arr, size);
	cout << " <-- Original" << endl;
	// Do bubble sort
	for (int i=1; i<size; i++) {
		for (int j=0; j<i; j++) {
			swapped = false;
			if (arr[i] < arr[j]) {
				swap(arr[i], arr[j]);
				swapped = true;
			}
			printArr(arr, size);
			if (swapped) {
				cout << " <-- Swapped";
			} else {
				cout << " <-- No change";
			}
			cout << " (" << j+1 << ", " << i+1 << ")" << endl;
		}
		cout << endl;
	}
	
	
	
	free(arr);

	return 0; 
}
