class MinStack {
public:
    stack<long long> st;
    long long mini = LLONG_MAX;
    MinStack() {}

    void push(int val) {
        long long value = val;
        if (st.empty()) {
            mini = value;
            st.push(value);
        } else {
            if (value < mini) {
                st.push(2 * value - mini);
                 mini = value;
            } else {
                st.push(value);
            }
        }
    }

    void pop() {
        if (st.top() < mini) {
            mini = 2 * mini - st.top();
        }
        st.pop();
    }

    int top() { 
        if(st.top()<mini){
            return mini;
        }else{
        return st.top(); }
        }

    int getMin() { return mini; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */