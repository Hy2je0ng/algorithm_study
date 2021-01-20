#include <bits/stdc++.h>
#define MAX 110 // 배열의 최대크기(100)보다 예외를 생각해 10을 더해서 선언. 

using namespace std;

int main(){
	
	int n, m;
	vector<int> min_data;
	
	scanf("%d %d", &n, &m);
	
	for(int i = 0; i < n; i++){
		int min = 10010; // 작은 숫자를 찾기위해 들어올 수 있는 수보다 높게 선언. 
		for(int j = 0; j < m; j++){
			int x;
			scanf("%d", &x);
			min = (min >= x) ? x : min; // 각 행별로 가장 작은 숫자를 min에 할당. 
		}
		min_data.push_back(min); // 가장 작은수만 min_data에 추가 
	}
	
	sort(min_data.begin(), min_data.end()); //min_data 오름차순으로 정렬. 
	int max = min_data[n-1]; // 가장 마지막 인덱스가 가장 큰 값. 

	printf("%d", max);
	return 0;
}
