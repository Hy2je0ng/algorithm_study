#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, m;
	vector<int> v;
	
//	==== test data ====
//	4 6
//  19 15 10 17
	
	scanf("%d %d", &n, &m);
	
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		v.push_back(x);
	}
		
	sort(v.begin(), v.end());
	
	int start = 1;
	int end = v.back();
	
	int result = 0;
	
	while(start <= end){
		long long int total = 0;
		
		int mid = (start + end) / 2;
		
		for(int i = 0; i < n; i++){
			if(v[i] > mid){
				total += v[i] - mid;
			}
		}
		
		if(total == m) {
			result = mid;
			break;
		}
		else if(total < m) end = mid - 1;
		else start = mid + 1;
	}
	
	printf("%d", result);
	
	return 0;
}
