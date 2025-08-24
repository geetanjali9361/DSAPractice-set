class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>map;
        vector<int>result;
        for(int i:arr1){
            map[i]++; // now we have all the elements in the map
        }

        for(int x : arr2){
            while(map[x]>0){
                result.push_back(x);
                map[x]--;
            }
        }

        vector<int>rest;
        for(auto &p : map){
            while(p.second>0){
                rest.push_back(p.first);
                p.second--;
            }
        }

        sort(rest.begin(),rest.end());
        result.insert(result.end(),rest.begin(),rest.end());
        return result;
    }
};