class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> l;
        l.push_back(0);
        
        for(int i = 1; i < n+1; ++i){
             if(i % 2 != 0){
                l.push_back(l[i/2]+1);
             }
            else
                l.push_back(l[i/2]);
        }
        
        return l;
        
    }
};