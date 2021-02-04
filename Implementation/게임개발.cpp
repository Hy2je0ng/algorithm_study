#include <bits/stdc++.h>

#define MAX 60

int main(){
	
	int n, m, a, b, d;
	int map[MAX][MAX] = {0, };
	int result = 1;
	
	int leftA[4] = {0, -1, 0, 1}; // 각 방향에서 왼쪽 방향으로 움직여야할 거리 
	int leftB[4] = {-1, 0, 1, 0};
	
	scanf("%d %d", &n, &m);
	scanf("%d %d %d", &a, &b, &d);
	
	for(int i = 0 ;i < MAX; i++){ // 배열 1로 초기화 
		for(int j = 0; j < MAX; j++){
			map[i][j] = 1;
		}
	}

	for(int i = 1 ;i <= n; i++){
		for(int j = 1; j <= m; j++){
			scanf("%d", &map[i][j]);
		}
	}	
	
	a += 1; // 좌표 (1, 1) ~ 로 변경 
	b += 1; 
	
	while(true){
		
		map[a][b] = 1; // 현재 있는 위치 간 곳으로 변경 
		
		if(map[a-1][b] + map[a+1][b] + map[a][b-1] + map[a][b+1] == 4) break; // 사방향이 모두 가본 곳 또는 바다인지 확인 
		
		int nextA = a + leftA[d]; // 현재 바라보고 있는 방향의 왼쪽 인덱스 계산 
		int nextB = b + leftB[d];
		
		if(map[nextA][nextB] == 0){
			a = nextA;
			b = nextB;
			result += 1;
		}
		else{
			d = ((d-1) < 0) ? 3 : d-1;
		}
		
	}
	
	printf("%d", result);
	
	return 0;
}
