class MyHashMap {
public:
    unordered_map<int,int> map;
    MyHashMap() {
        
        
    }
    
    void put(int key, int value) {
        map[key]=value;
        
    }
    
    int get(int key) {
        if(map.find(key)!=map.end()) return map[key];
        else return -1;
        
    }
    
    void remove(int key) {
        if(map.find(key)!=map.end()) map.erase(key);
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */