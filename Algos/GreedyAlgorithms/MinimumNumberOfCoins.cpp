#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void findMinimumCoins(vector<int> coins, int V){
    // Print all the coins & the total coins
    // If the array is not sorted, first sort it
    // sort(coins.begin(), coins.end());
    vector<int> result;
    for (int i = coins.size()-1; i >=0; i--) {
        while (V >= coins[i]){
            V -= coins[i];
            result.push_back(coins[i]); // 50 20 20 1 = 4
        }
    }
    cout << "Coins that are selected: ";
    for (auto x : result){
        cout << x << " ";
    }cout << endl;
    cout << "Minimum number of coins: " << result.size() << endl;
}
int main() {
    vector<int> coins = {1,2,5,10,20,50,100,200,500,1000,2000};
    int V = 91;
    findMinimumCoins(coins, V);
    return 0;
}
