#include <iostream>
using namespace std;
int in(int i, int j, int r, int c){
    return(i >= 0 && i < r && j >= 0 && j < c);
}
void f(int map[2][50][50], int now, int r, int c){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << map[now][i][j] << " ";
        }
        cout << endl;
    }
    cout << "------" << endl;
    return;
}
int main(){
    int map[2][50][50];
    int r, c, k, m;
    cin >> r >> c >> k >> m;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> map[0][i][j];
            map[1][i][j] = map[0][i][j];
        }
    }
    int now = 0, next = 1;
    int dr[] = {-1, 0, 1, 0};
    int dc[] = {0, 1, 0, -1};
    for(int day = 0; day < m; day++){
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(map[now][i][j] == -1) continue;
                int move = map[now][i][j] / k;
                for(int d = 0; d < 4; d++){
                    int nr = i + dr[d], nc = j + dc[d];
                    if(in(nr, nc, r, c) && map[now][nr][nc] != -1){
                        map[next][i][j] -= move;
                        map[next][nr][nc] += move;
                    }
                }//dir
                #ifdef debug
                f(map, next, r, c);
                cout << endl;
                #endif
            }
        }
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                map[now][i][j] = map[next][i][j];
            }
        }
        now ^= 1, next ^= 1;
    }
    int mn = INT32_MAX, mx = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(map[now][i][j] != -1){
                mn = min(mn, map[now][i][j]);
                mx = max(mx, map[now][i][j]);
            }
        }
    }
    cout << mn << endl << mx << endl;
    return 0;
}