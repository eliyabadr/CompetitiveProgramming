#include <bits/stdc++.h>
using namespace std;

int n,m;
bool visited[1000][1000];
char v[1000][1000];
int di[4] = {1,0,-1,0};
int dj[4] = {0,1,0,-1};

bool isValid(int k1, int k2, int max_row, int max_col){
    return (k1 >= 0 && k1 < max_row && k2 >= 0 && k2 < max_col);
}

void dfs(int x, int y){
	v[x][y] = true;
	for(int i = 0 ; i < 4 ; i++){
		int dx = x + di[i];
		int dy = y + dj[i];
		if(isValid(dx,dy,n,m) && v[dx][dy] == '.' && visited[dx][dy] == false){
			dfs(dx,dy);
		}
	}
}


int main(){
    cin>>n>>m;
    int counter = 0 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin>>v[i][j];
            visited[i][j] = false;
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(visited[i][j] == false && v[i][j] == '.'){
                counter++;
                dfs(i,j);
            }
        }
    }
    cout<<counter;

    return 0;
}
