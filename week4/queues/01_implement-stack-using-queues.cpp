class MyStack {
public:
    deque<int> myStack;
    
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        myStack.push_front(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        // we are told that no pop or top operations will be called on empty stack
        int top = myStack.front();
        myStack.pop_front();
        return top;
    }
    
    /** Get the top element. */
    int top() {
        return myStack.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return myStack.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */