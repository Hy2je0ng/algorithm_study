#include <bits/stdc++.h>
#define MAX 510

using namespace std;

void selectionSort(int* data, int n){
	// 내림차순 정렬 
	for(int i = 0; i < n-1; i++){
		int maxIdx = i;
		for(int j = i+1 ; j < n; j++){
			if(data[maxIdx] < data[j]){
				maxIdx = j;
			}
		}
		swap(data[i], data[maxIdx]);
	}
}

int main(){
	
	int n;
	int data[MAX] = {0, };
	// ==== test data ====
	// 10 7 5 9 0 3 1 6 2 4 8
	
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &data[i]);
	}
	
	selectionSort(data, n);
	
	for (int i = 0; i < n; i++) {
		printf("%d ", data[i]);
	}
	
	return 0;
}

