#include<bits/stdc++.h>
using namespace std;

void categorizeValues(const vector<int>& arr) {
    for (int value : arr) {
        if (value > 65) {
            cout << value << " - Obesity" << endl;
        } else if (value < 45) {
            cout << value << " - Ricket" << endl;
        } else {
            cout << value << " - Healthy" << endl;
        }
    }
}

int main() {
   vector<int> arr = {35, 45, 70, 80, 90, 28, 66, 49, 53, 52, 57, 78};
    categorizeValues(arr);
    return 0;
}