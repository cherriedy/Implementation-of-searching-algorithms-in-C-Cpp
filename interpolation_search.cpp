#include <iostream>
using namespace std;

//int interpolation_search(int a[], int n, int target) {
//	int low = 0, high = n - 1;
//    // using target <= a[high] to check target is out of range ?
//    // using target >= a[low] is the same as target <= a[high]
//	while (low < high && target <= a[high] && target >= a[low]) {
//        // formula of interpolation search
//	    int mid = low + ((high - low) * ((target - a[low]) / (a[high] - a[low])));
//        // all the codes below are implemented as iterative binary search
//		if (target == a[mid]) {
//			return mid;
//		}
//		else if (target < a[mid]) {
//			high = mid - 1;
//		}
//		else {
//			low = mid + 1;
//		}
//	}
//	if (target == a[high]) {
//		return high;
//	}
//	else {
//        // -1 means target isn't in array
//		return -1;
//	}
//}



// recursion method
int interpolation_search(int a[], int low, int high, int target) {
    int mid = low + ((high - low) * ((target - a[low]) / (a[high] - a[low])));
    if (low > high) {
        if (target == a[low]) {
            return low;
        }
        else {
            return -1;
        }
    }
    if (target == a[mid]) {
        return mid;
    }
    else if (target < a[low]) {
        return interpolation_search(a, low, mid - 1, target);
    }
    else {
        return interpolation_search(a, mid + 1, high, target);
    }
}


int main() {
	int a[] = {1, 10, 19, 20, 21, 100, 201},
	    n = sizeof(a) / sizeof(a[0]);
	//cout << interpolation_search(a, n, 1);
    cout << interpolation_search(a, 0, n - 1, 19);
	return 0;
}
