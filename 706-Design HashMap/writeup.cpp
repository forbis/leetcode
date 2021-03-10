class MyHashMap {
public:
    /** Initialize your data structure here. */
    set<pair<int, int>> hm;
    MyHashMap() {
        
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        for(auto element : hm) {
            if(element.first == key) { hm.erase(element); }
        }
        
        hm.insert(make_pair(key, value));
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        for(auto element : hm) {
            if(element.first == key) { return element.second; }
        }
        
        return -1;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        for(auto element : hm) {
            if(element.first == key) { hm.erase(element); }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */