class MinStack {
    vector<vector<int>> st;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        int mini = this->getMin();
        if(mini>=INT_MAX || mini>value){
            mini = value;
        }
        st.push_back({value,mini});
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        return st[st.size()-1][0];
    }
    
    int getMin() {
        if(st.empty()) return INT_MAX;
        return st[st.size()-1][1];   
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */