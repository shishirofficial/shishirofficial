class MyHashSet {
public:
    /** Initialize your data structure here. */
    struct Bucket{
        vector<int> bucket = {};
        
        void add(int key)
        {
            if(!contains(key))
            {
                bucket.push_back(key);
            }
        }
        
        void remove(int key)
        {
            auto pos=find(begin(bucket),end(bucket),key);
            if(pos!=end(bucket))
            {
                bucket.erase(pos);
            }
        }
        
        bool contains(int key)
        {
            return find(begin(bucket),end(bucket),key)!=end(bucket);
        }
    };
    int hashkey;
     vector<Bucket> array;
    MyHashSet(int keysize=137) 
    {
       
        hashkey=keysize;
        array.resize(hashkey);
    }
    
    void add(int key)
    {
        array[key%hashkey].add(key);
    }
    
    void remove(int key)
    {
        array[key%hashkey].remove(key);
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return array[key%hashkey].contains(key);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */