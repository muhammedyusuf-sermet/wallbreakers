class MyHashMap {
public:
    // The question tells us all of our keys will be 
    // between 0-1000000. So, we can just use that as index
    vector<int> values;
    
    /** Initialize your data structure here. */
    MyHashMap() {
        
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        if(key>=values.size()){
            values.resize(key+1,-1);
        }
        values[key] = value;
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        if(key>=values.size()){
            return -1;
        }
        return values[key];
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        if(key<values.size()){
            values[key] = -1;   
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