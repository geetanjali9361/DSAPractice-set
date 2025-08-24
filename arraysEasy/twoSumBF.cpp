#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bool found = false;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){ 
            if(arr[i] + arr[j] == 9){
                cout << "The indices that return 9 are [" << i << "," << j << "]\n";
                found = true;
            }
        }
    }

    if(!found){
        cout << "No indices found whose sum is 9.\n";
    }

    return 0;
}