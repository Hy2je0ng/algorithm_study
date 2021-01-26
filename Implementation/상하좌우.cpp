#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	string plans = "";
	int x = 1, y = 1;
	
	// ---------  L  R  U  D ---------
	int dx[4] = {0, 0, -1, 1};
	int dy[4] = {-1, 1, 0, 0};
	char moveType[4]= {'L', 'R', 'U', 'D'};
	
	scanf("%d\n", &n);
	getline(cin, plans); // 공백 포함 한 줄 입력 
	
	for(int i = 0; i < plans.length(); i++){

		if (plans[i] == ' ') continue; // 공백시 아래 코드 진행하지 않음.
		
		char type = plans[i];
		int idx = -1;
		
		for(int j = 0 ; j < 4; j++){
			if(type == moveType[j]){ // 현재 타입의 인덱스 찾기. 
				idx = j;
				break;
			}
		}
		
		int nx = x + dx[idx];
		int ny = y + dy[idx];
		
		if(nx < 1 || nx > n || ny < 1 || ny > n) continue; // 경계선 넘어가면 처리하지 않음. 
		
		x = nx;
		y = ny;
		
	}
	
	printf("%d %d ", x, y);
	
	return 0;
}
