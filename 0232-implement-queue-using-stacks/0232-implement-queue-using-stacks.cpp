class MyQueue {
    private:
    void RemoveFromBottom(stack<int> &st){
        if(st.size()==1){
            element=st.top();
            st.pop();
            return;
        }
        int t=st.top();
        st.pop();
        RemoveFromBottom(st);
        st.push(t);
        
    }
    
    void PeekBottom(stack<int> &st){
        if(st.size()==1){
            element=st.top();
            
            return;
        }
        int t=st.top();
        st.pop();
        PeekBottom(st);
        st.push(t);
        
    }
    
public:
    int element=0;
    stack<int> st;
    MyQueue() {        
        
    }
    
    void push(int x) {
        st.push(x);
        
    }
    
    int pop() {
     
     RemoveFromBottom(st);
        return element;
        
        
        
    }
    
    int peek() {
        
        PeekBottom(st);
        return element;
        
    }
    
    bool empty() {
        if(st.empty()) return true;
        return false;        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */