#include <bits/stdc++.h>
#define MAX 110 // �迭�� �ִ�ũ��(100)���� ���ܸ� ������ 10�� ���ؼ� ����. 

using namespace std;

int main(){
	
	int n, m;
	vector<int> min_data;
	
	scanf("%d %d", &n, &m);
	
	for(int i = 0; i < n; i++){
		int min = 10010; // ���� ���ڸ� ã������ ���� �� �ִ� ������ ���� ����. 
		for(int j = 0; j < m; j++){
			int x;
			scanf("%d", &x);
			min = (min >= x) ? x : min; // �� �ະ�� ���� ���� ���ڸ� min�� �Ҵ�. 
		}
		min_data.push_back(min); // ���� �������� min_data�� �߰� 
	}
	
	sort(min_data.begin(), min_data.end()); //min_data ������������ ����. 
	int max = min_data[n-1]; // ���� ������ �ε����� ���� ū ��. 

	printf("%d", max);
	return 0;
}
