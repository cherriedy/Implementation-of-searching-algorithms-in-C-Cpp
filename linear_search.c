#include <stdio.h>

int linear_search(int a[], int n, int target) {
	for (int i = 0; i < n; i++) {
		if (a[i] == target) {
			return i;
		}
	}
	return -1;
}

int main() {
	int a[] = {6, 4, 10, 7, 5, 1, 3, 2, 8, 9},
	    n = sizeof(a) / sizeof(a[0]),
	    target = 3;
	printf("%d", linear_search(a, n, target));
	return 0;
}
