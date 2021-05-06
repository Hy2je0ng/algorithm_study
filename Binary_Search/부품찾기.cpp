#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> &v, int target, int start, int end){
	if(start > end) return -1;
	
	int mid = (start + end) / 2;
	
	if(target == v[mid]) return mid;
	else if(target < v[mid]) return binarySearch(v, target, start, mid - 1);
	else return binarySearch(v, target, mid + 1, end);
}

int main(){
	
	int n, m;
	vector<int> nv, mv;
	
//	==== test data ====
//	5
//	8 3 7 9 2
//	3
//	5 7 9
	
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		nv.push_back(x);
	}
	
	scanf("%d", &m);
		
	for (int i = 0; i < m; i++) {
		int x;
		scanf("%d", &x);
		mv.push_back(x);
	}
		
	sort(nv.begin(), nv.end());
	
	for(int i = 0; i < m; i++){
		if(binarySearch(nv, mv[i], 0, n-1) == -1){
			printf("no ");
		}
		else{
			printf("yes ");
		}
	}
	
	return 0;
}
