class MinStack {
public:
    stack<pair<int,long long>> s;
    long long mini=1e18;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push({val,val});
            mini=val;
            return;
        }
       
        if(val<s.top().second)mini=val;
        s.push({val,mini});
        
    }
    
    void pop() {
        
        
        s.pop();
        if(!s.empty())
     mini=s.top().second;
        
        
    }
    
    int top() {
        return s.top().first;
        
    }
    
    int getMin() {
        return (int)s.top().second;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */