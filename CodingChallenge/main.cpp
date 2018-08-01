#include <iostream>
#include <vector>
#include <string>

using namespace std; 

class Flower {

private: 
	string name;
	int num_pedals;
	float price;

public:
	Flower(string n, int pedals, float pr) : name(n), num_pedals(pedals), price(pr) {
	}

	string getName() {
		return name;
	}

	void setName(string s) {
		name = s;
	}

	int getPedals() {
		return num_pedals;
	}
	void setPedals(int p) {
		num_pedals = p;
	}
};



struct Pair {
	int first;
	double second;
};

//Modify the CreditCard class from Code Fragment 1.3 to check that the
// price argument passed to function chargeIt and the payment argument
// passed to function makePayment are positive.

void find_largest_smallest(int &smallest, int &largest, const int arr[], int length);

void find_largest_smallest(int &smallest, int &largest, const int arr[], int length) {

	for (int i = 0; i < length; i++) {

		if (arr[i] > largest) {
			largest = arr[i];
		}

		if (arr[i] < smallest) {
			smallest = arr[i];
		}
	}
}

int sum_all_integers_less_than_n(int n) {
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += i;
	}

	return sum;
}

//Write a short C++ function, isMultiple, that takes two positive long values,
// n and m, and returns true if and only if n is a multiple of m, that is, n = mi
// for some integer i.

bool isMultiple(long n, long m) {
	return (m % n == 0);
}

//Write a C++ function printArray(A, m, n) that prints an m × n twodimensional
// array A of integers, declared to be “int** A, ” to the standard
// output.Each of the m rows should appear on a separate line.

void printArray(int **A, int m, int n) {

	for (int row = 0; row < m; row++) {
		for (int col = 0; col < n; col++) {
			cout << A[row][col] << " ";
		}

		cout << endl;
	}
}


// reverse array of numbers
void reverse(int a[], int length) {
	// 1 2 3 4 
	// 4 3 2 1 

	int endIndex = length - 1;
	for (int i = 0; i < length/2; i++) {
		int temp = a[i];
		a[i] = a[endIndex];
		a[endIndex--] = temp;
	}

	// temp = a[0]
	// a[0] = a[length - 1]
	// a[length -1 ] = a[0]
	
	// temp = a[1]
	// a[0] = a[length -2]
	// a[length -2] = a[1]


}


// findProduct Even

bool isEvenProduct(int a[], int length) {
	
	// 1 , 2 ,3 ,4
	for (int i = 0; i < length; i++) {
		for (int j = i+1; j < length; j++) {
			if ((a[i] * a[j]) % 2 == 0) {
				return true;
			}
		}
	}
}

void allPossibleOutcomes(char a[], int length) {


	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++){
			for (int k = 0; k < length; k++) {
				for (int w = 0; w < length; w++) {
					for (int t = 0; t < length; t++) {
						for (int v = 0; v < length; v++) {
							string concat = "";
							concat = (concat + a[i]) + a[j] + a[k] + a[w] + a[t] + a[v];
							cout << concat << endl;
						}

					}
				}
			}
		}
	}

}
int main() {

	char a[] = { 'a', 'b', 'c', 'd', 'e', 'f' };

	allPossibleOutcomes(a, 6);
	
	system("pause");
	return 0;
}