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
	
	sum += (m / (k + 1)) * (k * first + second); // 반복되는 값을 몫만큼 더해서 할당. 
	sum += (m % (k + 1)) * first; // 나머지 값 더한 후 할당. 
	
	printf("%d", sum);
	return 0;
}
