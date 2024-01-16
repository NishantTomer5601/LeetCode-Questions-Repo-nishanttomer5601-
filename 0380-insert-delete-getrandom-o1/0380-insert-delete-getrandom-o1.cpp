class RandomizedSet {
public:
    unordered_map<int,bool> map;
    vector<int> v;
    RandomizedSet() {
       // RandomizedSet* obj = new RandomizedSet();
        
    }
    
    bool insert(int val) {
        if(map.find(val)!=map.end()) return false;
        else{
            map[val]=true;
            v.push_back(val);
            return true;
        }
     
        
    }
    
    bool remove(int val) {
        if(map.find(val)==map.end()) return false;
        else{
            map.erase(val);
            auto it=find(v.begin(),v.end(),val);
            if(it!=v.end()){
                v.erase(it);
            }
            return true;
        }
       
        
        
    }
    
    int getRandom() {
        int rInd=rand()%v.size();
        return v[rInd];
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */