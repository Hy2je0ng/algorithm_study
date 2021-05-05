#include <bits/stdc++.h>

using namespace std;

void quickSort(int* data, int start, int end){
	
	if(start >= end) return; // 탐색할 원소가 1개인 경우 종료 
	
	int pivot = start; // 첫 번째 원소를 pivot으로 
	int left = start + 1;
	int right = end;
	
	while(left <= right){
		
		while((left <= end) && (data[left] <= data[pivot])) left++;
		// 왼쪽에서 pivot값보다 큰 데이터를 찾을 때까지 반복 
		
		while((right > start) && (data[right] >= data[pivot])) right--;
		// 오른쪽에서 pivot값 보다 작은 데이터 찾을 때까지 반복 
		// right는 오른쪽에서부터 pivot보다 작은 첫 위치		
		
		if(left > right) swap(data[pivot], data[right]);
 		// 엇갈렸다면 작은 데이터(right)와 pivot 교체 
		
		else swap(data[left], data[right]);
		// 엇갈리지 않았다면 작은 데이터와 큰 데이터 교체 
		
	}
	
	quickSort(data, start , right -1); // pivot 기준 왼쪽 정렬 
	quickSort(data, right + 1 , end); // pivot 기준 오른쪽 정렬 
	
}

int main() {

	int n = 10;
	int data[n] = {0, };
	
	// ==== test data ====
	// 7 5 9 0 3 1 6 2 4 8

	for (int i = 0; i < n; i++) {
		scanf("%d", &data[i]);
	}

	quickSort(data, 0, n-1);
	
	for (int i = 0; i < n; i++) {
		printf("%d ", data[i]);
	}

	return 0;
}
