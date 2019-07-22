class MyQueue {
public:
    stack<int> myQueue, queueBuffer;
    
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        while(!myQueue.empty()){
            queueBuffer.push(myQueue.top());
            myQueue.pop();
        }
        myQueue.push(x);
        while(!queueBuffer.empty()){
            myQueue.push(queueBuffer.top());
            queueBuffer.pop();
        }
        
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int top = myQueue.top();
        myQueue.pop();
        return top;
        
    }
    
    /** Get the front element. */
    int peek() {
        return myQueue.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return myQueue.empty();
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