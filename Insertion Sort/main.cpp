// Insertion Sort
// Time Complexity: O(n^2) 

#include<iostream>
using namespace std;

int main() {
	const int size = 10;
	int data[size] = {2,7,1,4,8,3,0,9,5,6};
	int temp; int j;

	for(int i=0; i<size; i++) {
		cout << data[i] << " ";
	}
	cout << endl;

	for(int i=1; i<size; i++) {
		j = i;
		while(j >= 0 && data[j] < data[j-1]) {
			temp = data[j];
			data[j] = data[j - 1];
			data[j - 1] = temp;
			j--;
		}
	}

	for(int i=0; i<size; i++) {
		cout << data[i] << " ";
	}
	cout << endl;
	
	return 0;
}
