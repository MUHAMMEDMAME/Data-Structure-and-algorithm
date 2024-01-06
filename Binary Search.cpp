/*#include<iostream>
using namespace std;
struct Array  {
	int* p;
	int size;
	int length;

};
int binSearch(struct Array arr, int key) {
	int l, mid, h;
	l = 0;
	h = arr.length - 1;
	while (l <= h) {
		mid = (l + h) / 2;
		if (arr.p[mid] == key)
			return mid;
		else if (arr.p[mid] > key)
			h = mid - 1;
		else
			l = mid + 1;
	}
	return -1;
}


int binRecursionSearch(struct Array arr, int l, int h, int key) {
	if (l <= h) {
		int mid = (l + h) / 2;
		if (arr.p[mid] == key)
			return mid;
		else if (arr.p[mid] > key)
			return binRecursionSearch(arr, l, mid-1, key);
		else
			return binRecursionSearch(arr, mid+1, h, key);

	}

	return -1;
}
int main() {
	int n, i;
	struct Array arr;

	printf("Enter the Array's size:");
	cin>>arr.size;

	arr.p = (int*) malloc(arr.size * sizeof(int));

	printf("Enter Array's length:");
	scanf_s("%d", &n);
	for (i = 0;i < n;i++)
		scanf_s("%d", &arr.p[i]);
	arr.length = n;

	//cout << "Binary Search is" << binSearch(arr, 6);
	cout << "recursion Binary Search is:" << binRecursionSearch(arr, 0, arr.length - 1, 6)<<"\n";


}
*/