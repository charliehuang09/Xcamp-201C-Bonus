#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <stdio.h>
using namespace std;
int endpoint, length;
vector<int> ans;
vector<int> input;
void recurssion(int current, int speed, int step){
    if (current >= endpoint){
        if (current == endpoint){
            
        }
        return;
    }
    step++;
    recurssion(current + speed + 1, speed + 1, step);
    if (speed > 1){
        recurssion(current + speed, speed, step);
    }
    if (speed > 1){
        recurssion(current + speed - 1, speed - 1, step);
    }

}
int main() {
    // freopen("race.in", "r", stdin);
    // freopen("race.out", "w", stdout);
    cin >> endpoint >> length;
    int temp;
    for (int i = 0; i < length; i++){
        ans.push_back(10000);
    }
    for (int i = 0; i < length; i++){
        cin >> temp;
        input.push_back(temp);
    }
    recurssion(0, 0, 0);
    // cout << "\n\n\n";
    for (int i = 0; i < length; i++){
        cout << ans[i] << "\n";
    }
    
    return 0;

} 
