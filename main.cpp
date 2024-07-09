#include<bits/stdc++.h>
using namespace std;


int countFluctuations(const vector<int>& arr) {
    int fluctuations = 0;
    for (int  i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            fluctuations++;
        }
    }
    return fluctuations;
}

int main() {

   vector<int> arr = {10, 50, 30, 80, 10, 80};
   cout << "Number of fluctuations: " << countFluctuations(arr) <<endl;
    return 0;
}
