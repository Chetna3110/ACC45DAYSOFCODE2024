#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
    int T;
    cin >> T; 
    while (T--) {
        int N, A;
        cin >> N >> A; 
        int non_infected = N - A; 
        int min_masks = min(A, non_infected); 
        cout << min_masks << endl; 
    }
    return 0;
}