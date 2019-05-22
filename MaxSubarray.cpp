#include <iostream>
using namespace std;

int FindMaximumCrossingSubarray(int * A, int low, int mid, int high) {
	int sum = 0;
	int left_sum = -2147483647, right_sum = -2147483647;
	for (int i = mid; i >= low; i--) {
		sum += A[i];
		if(sum > left_sum)
			left_sum = sum;
	}
	sum = 0;
	for (int j = mid + 1; j <= high; j++) {
		sum += A[j];
		if(sum > right_sum)
			right_sum = sum;
	}
	return (left_sum + right_sum);
}
int FindMaximumSubarray(int * A, int low, int high) {
	if (high == low)
		return A[low];
	else {
		int mid = (low + high) / 2;
		int left_sum = FindMaximumSubarray(A, low, mid);
		int right_sum = FindMaximumSubarray(A, mid + 1, high);
		int cross_sum = FindMaximumCrossingSubarray(A, low, mid, high);
		if (left_sum >= right_sum && left_sum >= cross_sum)
			return left_sum;
		else if (right_sum >= left_sum && right_sum >= cross_sum)
			return right_sum;
		else
			return cross_sum;
	}
}
int main(int argc, char **argv) {
	int arraySize;

	cin >> arraySize;
	int* Sequence = new int[arraySize];

	for (int i = 0; i < arraySize; i++)
		cin >> Sequence[i];

	cout << FindMaximumSubarray(Sequence, 0, arraySize-1);

	delete[] Sequence;
}