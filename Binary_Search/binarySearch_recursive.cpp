#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> &v, int target, int start, int end){
	
	if(start > end) return -1;
	
	int mid = (start + end) / 2;
	
	if(target == v[mid]) return mid;
	else if(target < v[mid]) binarySearch(v, target, start, mid - 1);
	else if(target > v[mid]) binarySearch(v, target, mid + 1, end);
	
}

int main(){
	
	int n, target;
	vector<int> v;
	
//	 ==== test data ====
//	 10 75
//	 0 11 22 31 45 51 60 75 82 99
	
	scanf("%d %d", &n, &target);
	
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		v.push_back(x);
	}
	
	sort(v.begin(), v.end()); // ���� Ž���� ���� ���� 
	
	int result = binarySearch(v, target, 0, n-1);
	
	if (result == -1) {
		printf("���Ұ� �������� �ʽ��ϴ�.\n");
    }
    else {
    	printf("%d\n", result + 1);
    }
	
	return 0;
}
