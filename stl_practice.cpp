#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main() {
    vector<int> num ={5,2,8,2,3,5};
    sort(num.begin(),num.end());
    for(int n :num){
        cout << n << " ";
    }
    cout << endl;
    set<int> uniqueNums(num.begin(), num.end());
    for(int n : uniqueNums){
        cout << n << " ";
    }
    cout << endl;
    
    return 0;
}