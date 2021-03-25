#include <bits/stdc++.h>

using namespace std;

int main() {

	int n = 10;
	int data[n] = {0, };
	
	// ==== test data ====
	// 7 5 9 0 3 1 6 2 4 8

	for (int i = 0; i < n; i++) {
		scanf("%d", &data[i]);
	}

	for (int i = 0; i < n - 1; i++) {
		int minIdx = i;
		for (int j = i + 1; j < n; j++) {
			if (data[minIdx] > data[j]) {
				minIdx = j;
			}
		}
		swap(data[i], data[minIdx]);
	}
	
	for (int i = 0; i < n; i++) {
		printf("%d ", data[i]);
	}

	return 0;
}
