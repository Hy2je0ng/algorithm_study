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

	while(true){
		for(int i = 0; i < k; i++){
			if(m == 0) break;
			sum += first; // k�� first ���ϱ�
			m--;
		}
		if(m == 0) break;
		sum += second; // 1�� second ���ϱ� 
		m--;
	} 
	
	
	printf("%d", sum);
	return 0;
}

