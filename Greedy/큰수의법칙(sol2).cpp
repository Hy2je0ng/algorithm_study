#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, m, k;
	vector<int> data;
	int sum = 0;
	
	scanf("%d %d %d", &n, &m, &k);
	
	for(int i = 0; i < n; i++){
		int x;
		scanf("%d", &x);
		data.push_back(x);
	}
	
	sort(data.begin(), data.end());
	int first = data[n-1]; // ���� ū ���� first�� �Ҵ� 
	int second = data[n-2]; // �ι�°�� ū ���� second �� �Ҵ� 
	
	sum += (m / (k + 1)) * (k * first + second); // �ݺ��Ǵ� ���� ��ŭ ���ؼ� �Ҵ�. 
	sum += (m % (k + 1)) * first; // ������ �� ���� �� �Ҵ�. 
	
	printf("%d", sum);
	return 0;
}
