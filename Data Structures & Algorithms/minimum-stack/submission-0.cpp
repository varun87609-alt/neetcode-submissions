class MinStack {
    stack<int>st;
        stack<int>mnst;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(mnst.empty()==true){
            mnst.push(val);
        }else{
            mnst.push(min(mnst.top(),val));
        }
    }
    
    void pop() {
        st.pop();
        mnst.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mnst.top();
    }
};
