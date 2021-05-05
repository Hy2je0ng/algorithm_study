#include <bits/stdc++.h>

using namespace std;

void quickSort(int* data, int start, int end){
	
	if(start >= end) return; // Ž���� ���Ұ� 1���� ��� ���� 
	
	int pivot = start; // ù ��° ���Ҹ� pivot���� 
	int left = start + 1;
	int right = end;
	
	while(left <= right){
		
		while((left <= end) && (data[left] <= data[pivot])) left++;
		// ���ʿ��� pivot������ ū �����͸� ã�� ������ �ݺ� 
		
		while((right > start) && (data[right] >= data[pivot])) right--;
		// �����ʿ��� pivot�� ���� ���� ������ ã�� ������ �ݺ� 
		// right�� �����ʿ������� pivot���� ���� ù ��ġ		
		
		if(left > right) swap(data[pivot], data[right]);
 		// �����ȴٸ� ���� ������(right)�� pivot ��ü 
		
		else swap(data[left], data[right]);
		// �������� �ʾҴٸ� ���� �����Ϳ� ū ������ ��ü 
		
	}
	
	quickSort(data, start , right -1); // pivot ���� ���� ���� 
	quickSort(data, right + 1 , end); // pivot ���� ������ ���� 
	
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
