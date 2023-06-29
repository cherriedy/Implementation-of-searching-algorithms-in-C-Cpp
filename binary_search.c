#include <stdio.h>
#include <math.h>

int binary_search(int a[], int low, int high, int target) {
	int mid = floor((low + high) / 2);
	if (low >= high) {
		if (a[low] == target) {
			return low;
		}
		else {
			return -1;
		}
	}
	if (target == a[mid]) {
		return mid;
	}
	else if (target < a[mid]) {
		return binary_search(a, low, mid - 1, target);
	}
	else {
		return binary_search(a, mid + 1, high, target);
	}
}

int main() {
	int a[] = {6, 4, 10, 7, 5, 1, 3, 2, 8, 9},
	    n = sizeof(a) / sizeof(a[0]),
	    target = 3;
	printf("%d", a[binary_search(a, 0, n - 1, target)]);
	return 0;
}
