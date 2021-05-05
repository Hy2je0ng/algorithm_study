#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n = 10;
	int data[n] = {0, };
	
	// ==== test data ====
	// 7 5 9 0 3 1 6 2 4 8

	for (int i = 0; i < n; i++) {
		scanf("%d", &data[i]);
	}
	
	sort(data, data + n);
	
	for (int i = 0; i < n; i++) {
		printf("%d ", data[i]);
	}
	
	return 0;
}

