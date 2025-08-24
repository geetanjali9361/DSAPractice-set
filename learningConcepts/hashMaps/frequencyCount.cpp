#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    // Array equivalent
    vector<int> arr = {2, 7, 2, 8, 2, 7};
    
    // HashMap equivalent - unordered_map in C++
    unordered_map<int, int> map;

    for(int num : arr) {
        // Java: map.put(num, map.getOrDefault(num, 0) + 1)
        // C++: map[num]++ or the explicit way below
        map[num]++;
    }
    
    // Print the frequency count
    cout << "Frequency count:" << endl;
    for(auto pair : map) {
        cout << pair.first << " appears " << pair.second << " times" << endl;
    }
    
    return 0;
}

/* Output:
Frequency count:
2 appears 3 times
7 appears 2 times
8 appears 1 time
*/