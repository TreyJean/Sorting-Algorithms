// Merge Sort
// Time Complexity: O(nlog(n))

#include<iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end) {
	int temp[end - start + 1];
	int idx_i = start, idx_j = mid+1, idx_k = 0;

	while(idx_i <= mid && idx_j <= end) {
		if(arr[idx_i] <= arr[idx_j]) {
			temp[idx_k] = arr[idx_i];
			idx_i++;
		} else {
			temp[idx_k] = arr[idx_j];
			idx_j++;
		}
		idx_k++;
	}

	while(idx_i <= mid) {
		temp[idx_k++] = arr[idx_i++];
	}

	while(idx_j <= end) {
		temp[idx_k] = arr[idx_j];
		idx_k++; idx_j++;
	}

	idx_k = 0;
	for(int i=start; i <= end; i++) {
		arr[i] = temp[idx_k];
		idx_k++;
	}
}

void merge_sort(int arr[], int start, int end) {
	int mid;
	if(start < end) {
		mid = (start + end) / 2;

		merge_sort(arr, start, mid);
		merge_sort(arr, mid+1, end);

		merge(arr, start, mid, end);
	}
}

int main() {
	const int size = 10;
	int data[size] = {2,7,1,4,8,3,0,9,5,6};

	for(int i=0; i < size; i++) {
		cout << data[i] << " ";
	}
	cout << endl;

	merge_sort(data, 0, size - 1);

	for(int i=0; i < size; i++) {
		cout << data[i] << " ";
	}
	cout << endl;

	return 0;
}
