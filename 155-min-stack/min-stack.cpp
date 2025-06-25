class MinStack {
public:
        stack<int> ans;
        stack<int>min;
    MinStack() {
    }
    
    void push(int val) {
        ans.push(val);
        if(min.empty() ||val<min.top()){
            min.push(val);
        }else{
            min.push(min.top());
        }
    }
    
    void pop() {
        ans.pop();
        min.pop();
        
    }
    
    int top() {
        return ans.top();
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