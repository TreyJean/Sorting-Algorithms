// Quick Sort
// Time Complexity: O(nlog(n))

#include<iostream>
using namespace std;

void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

int partition(int arr[], int start, int end) {
	int pivot, index; 
	index = start;
	pivot = end;

	for(int i=index; i<end; i++) {
		if(arr[i] < arr[pivot]) {
			swap(&arr[i], &arr[index++]);
		}
	}

	swap(&arr[pivot], &arr[index]);
	return index;
}

void quick_sort(int arr[], int start, int end) {
	int pivot_index;

	if(start < end) {
		pivot_index = partition(arr, start, end);

		quick_sort(arr, start, pivot_index - 1);
		quick_sort(arr, pivot_index + 1, end);
	}
}

int main() {
	const int size = 10;
	int data[size] = {2,7,1,4,8,3,0,9,5,6};
	int temp;

	for(int i=0; i < size; i++) {
		cout << data[i] << " ";
	}
	cout << endl;

	quick_sort(data, 0, size - 1);

	for(int i=0; i < size; i++) {
		cout << data[i] << " ";
	}
	cout << endl;

	return 0;
}
