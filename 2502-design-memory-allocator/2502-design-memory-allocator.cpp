class Allocator {
public:
    vector<int> arr;
    unordered_map<int,int>mp;
    int n;
    Allocator(int n) {
        this->n=n;
        arr.resize(n);
    }
    
    int allocate(int size, int mID) {
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                int k=i,b=0;
                 while(i<n && arr[i]==0){
                     i++;
                     b++;
}
                if(b>=size){
                    for(int j=k;j<k+size;j++){
                        arr[j]=mID;
                    }
                        mp[mID]=k;
                        return k;
                        

}
}
}
        return -1;
    }
    
    int free(int mID) {
     int i=mp[mID],b=0;
        for(int i=0;i<n;i++){
     if(arr[i]==mID)
     { b++;
            arr[i]=0;}
        }
    mp.erase(mID);
    return b;
    }
        
};

/**
 * Your Allocator object will be instantiated and called as such:
 * Allocator* obj = new Allocator(n);
 * int param_1 = obj->allocate(size,mID);
 * int param_2 = obj->free(mID);
 */