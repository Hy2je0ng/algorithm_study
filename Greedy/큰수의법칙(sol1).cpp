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
	int first = data[n-1]; // 가장 큰 값을 first에 할당 
	int second = data[n-2]; // 두번째로 큰 값을 second 에 할당 

	while(true){
		for(int i = 0; i < k; i++){
			if(m == 0) break;
			sum += first; // k번 first 더하기
			m--;
		}
		if(m == 0) break;
		sum += second; // 1번 second 더하기 
		m--;
	} 
	
	
	printf("%d", sum);
	return 0;
}

