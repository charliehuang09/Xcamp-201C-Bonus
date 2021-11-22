#include <iostream>
using namespace std;
struct coord{
    int x;
    int y;
};
struct rect{
    coord ll;
    coord ur;
};
int board[2001][2001];
int main() {
    int ans = 0;
    rect b1;
    rect b2;
    rect t1;
    cin >> b1.ll.x >> b1.ll.y >> b1.ur.x >> b1.ur.y;
    cin >> b2.ll.x >> b2.ll.y >> b2.ur.x >> b2.ur.y;
    cin >> t1.ll.x >> t1.ll.y >> t1.ur.x >> t1.ur.y;
    b1.ll.x += 1000;
    b1.ll.y += 1000;
    b1.ur.x += 1000;
    b1.ur.y += 1000;
    t1.ll.x += 1000;
    t1.ll.y += 1000;
    t1.ur.x += 1000;
    t1.ur.y += 1000;
    b2.ll.x += 1000;
    b2.ll.y += 1000;
    b2.ur.x += 1000;
    b2.ur.y += 1000;
    
    //one is seeable


    for (int i = b1.ur.y; i > b1.ll.y; i--){
        for (int j = b1.ll.x; j < b1.ur.x; j++){
            board[i][j] = 1;
        }
    }
    for (int i = b2.ur.y; i > b2.ll.y; i--){
        for (int j = b2.ll.x; j < b2.ur.x; j++){
            board[i][j] = 1;
        }
    }
    for (int i = t1.ur.y; i > t1.ll.y; i--){
        for (int j = t1.ll.x; j < t1.ur.x; j++){
            board[i][j] = 0;
        }
    }
    for (int i = 0; i < 2001; i++){
        for (int j = 0; j < 2001; j++){
            if (board[i][j] == 1){
                board[i][j] = 0;
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
} 