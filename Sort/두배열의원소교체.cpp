#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, k;
	vector<int> dataA, dataB;
	
//	==== test data ====
//	5 3
//	1 2 5 4 3
//	5 5 6 6 5
	
	scanf("%d %d", &n, &k);
	
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		dataA.push_back(x);
	}
	
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		dataB.push_back(x);
	}
	
	sort(dataA.begin(), dataA.end());
	sort(dataB.begin(), dataB.end());
	
	int left = 0;
	int right = n-1;
	
	while(k > 0){
		if(dataA[left] > dataB[right]) break;
		swap(dataA[left], dataB[right]);
		
		left += 1;
		right -= 1;
		k--;
	}
	
	int result = 0;
	
	for (int i = 0; i < n; i++) {
		result += dataA[i];
	}
	
	printf("%d ", result);
	
	return 0;
}

