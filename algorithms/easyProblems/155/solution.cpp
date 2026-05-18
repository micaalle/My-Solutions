class MinStack {
public:
    stack <int> stak;
    stack <int> min;
    MinStack() {
        
    }
    
    void push(int val) {
        stak.push(val);

        if(min.empty() || val <= getMin()) min.push(val);
    }
    
    void pop() {
        if(stak.top() == min.top()) min.pop();
        
        stak.pop();
    }
    
    int top() {
        return stak.top();
    }
    
    int getMin() {
        return min.top();  
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
