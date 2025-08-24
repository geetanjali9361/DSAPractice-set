class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int> map;
        for (char i : s) {
            map[i]++;
            for(auto pair:map){
                if(pair.second==2){
                    return pair.first;
                }
            }
        }
        return 0;
    }
};