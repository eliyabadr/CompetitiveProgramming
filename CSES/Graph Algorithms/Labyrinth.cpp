#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;
int n, m;
int x_b, y_b;
int a_x, a_y;
bool cameAcross = false;

char v[MAX][MAX];
bool visited[MAX][MAX];
pair<int, int> parents[MAX][MAX];
vector<char> ans;
int di[4] = {1, 0, -1, 0};
int dj[4] = {0, 1, 0, -1};

bool isValid(int k1, int k2) {
    return (k1 >= 0 && k1 < n && k2 >= 0 && k2 < m);
}

void printMoves(int b_x, int b_y) {
    if (b_x == a_x && b_y == a_y) return;
    int dx = b_x - parents[b_x][b_y].first;
    int dy = b_y - parents[b_x][b_y].second;
    if (dx == 1 && dy == 0) {
        ans.push_back('D');
    } else if (dx == 0 && dy == 1) {
        ans.push_back('R');
    } else if (dx == -1 && dy == 0) {
        ans.push_back('U');
    } else if (dx == 0 && dy == -1) {
        ans.push_back('L');
    }
    printMoves(parents[b_x][b_y].first, parents[b_x][b_y].second);
}

void bfs(int x, int y) {
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = true;
    while (!q.empty()) {
        auto [px, py] = q.front();
        q.pop();
        if (v[px][py] == 'B') {
            cameAcross = true;
            x_b = px;
            y_b = py;
            break;
        }
        for (int i = 0; i < 4; ++i) {
            int dx = px + di[i];
            int dy = py + dj[i];
            if (isValid(dx, dy) && v[dx][dy] != '#' && !visited[dx][dy]) {
                visited[dx][dy] = true;
                parents[dx][dy] = {px, py};
                q.push({dx, dy});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> v[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (v[i][j] == 'A') {
                a_x = i;
                a_y = j;
                bfs(i, j);
                break;
            }
        }
    }

    if (cameAcross) {
        cout << "YES" << endl;
        printMoves(x_b, y_b);
        reverse(ans.begin(), ans.end());
        cout << ans.size() << endl;
        for (char x : ans) {
            cout << x;
        }
    } else {
        cout << "NO";
    }

    return 0;
}