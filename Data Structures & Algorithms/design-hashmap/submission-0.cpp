class MyHashMap {
private:
    int size;
    vector<vector<pair<int,int>>> buckets;
    int hash(int key){
        return key%size;
    }
public:
    MyHashMap() {
        size = 10000;
        buckets.resize(size);
    }
    
    void put(int key, int value) {
        int index = hash(key);
        for(auto& p : buckets[index]){
            if(p.first==key){
                p.second=value;
                return;
            }
        }
        buckets[index].push_back({key,value});
    }
    
    int get(int key) {
        int index = hash(key);
        for(auto& p : buckets[index]){
            if(p.first==key) return p.second;
        }
        return -1;
    }
    
    void remove(int key) {
        int index = hash(key);
        auto& map1 = buckets[index];
        for(auto it=map1.begin();it!=map1.end();++it){
            if(it->first==key){
                map1.erase(it);
                return;
            }
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