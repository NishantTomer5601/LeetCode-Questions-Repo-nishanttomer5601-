class StockSpanner {
public:
    vector<int> v;
    stack<int> s;
    StockSpanner() {
        
    }
    
    int next(int price) {
        if(v.size()==0){
            v.push_back(price);
            s.push(-1);
            s.push(0);
            return 1;
        }
        else{
            v.push_back(price);
            int n=v.size();
            
            while(s.top()!=-1 && v[s.top()]<=price) s.pop();
            if(s.top()==-1){
                s.push(n-1);
                return n;
            }
            else{
                int x=n-s.top()-1;
                s.push(n-1);
                return x;
                
            }
        }
        return 0;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */