// Selection Sort
// Time Complexity: O(n^2)

#include<iostream>
using namespace std;

int main() {
	const int size = 10;
	int data[size] = {2,7,1,4,8,3,0,9,5,6};
	int temp;

	for(int i=0; i<size; i++) {
		cout << data[i] << " ";
	}
	cout << endl;

	for(int i=0; i<size; i++) {
		for(int j=i+1; j<size; j++) {
			if(data[j] < data[i]) {
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}

		cout << data[i] << " ";
	}
	cout << endl;
	return 0;
}
