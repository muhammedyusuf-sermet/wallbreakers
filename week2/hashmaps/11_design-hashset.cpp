class MyHashSet {
public:
    // The question tells us all of our keys will be 
    // between 0-1000000. So, we can just use that as index
    vector<bool> values;
    
    /** Initialize your data structure here. */
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(key>=values.size()){
            values.resize(key+1,false);
        }
        values[key] = true;
    }
    
    void remove(int key) {
        if(key<values.size()){
            values[key] = false;   
        }
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        if(key>=values.size()){
            return false;
        }
        return values[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */