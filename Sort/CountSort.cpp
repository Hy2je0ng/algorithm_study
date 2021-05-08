#include <bits/stdc++.h>
#define MAX_VALUE 10
 
using namespace std;

int main() {

	int n = 15;
	int data[n] = {0, };
	int cnt[MAX_VALUE] = {0,};
	
	// ==== test data ====
	// 7 5 9 0 3 1 6 2 9 1 4 8 0 5 2

	for (int i = 0; i < n; i++) {
		scanf("%d", &data[i]);
	}

	for (int i = 0; i < n; i++) {
		cnt[data[i]] += 1;
	}
	
	for (int i = 0; i < MAX_VALUE; i++) {
		for(int j = 0; j < cnt[i]; j++){
			printf("%d ", i);
		}
	}

	return 0;
}
