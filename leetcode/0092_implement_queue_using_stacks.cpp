class MyQueue {
public:
    /**
     * Initialize the queue using two stacks
     */
    MyQueue() {
        // Constructor is empty as stacks are automatically initialized
    }
  
    /**
     * Push element x to the back of queue
     * @param x: Element to be pushed
     */
    void push(int x) {
        input_stack.push(x);
    }
  
    /**
     * Removes the element from the front of queue and returns it
     * @return: The front element that was removed
     */
    int pop() {
        transferElements();
        int front_element = output_stack.top();
        output_stack.pop();
        return front_element;
    }
  
    /**
     * Get the front element without removing it
     * @return: The front element of the queue
     */
    int peek() {
        transferElements();
        return output_stack.top();
    }
  
    /**
     * Check whether the queue is empty
     * @return: true if queue is empty, false otherwise
     */
    bool empty() {
        return input_stack.empty() && output_stack.empty();
    }
  
private:
    stack<int> input_stack;   // Stack for enqueue operations
    stack<int> output_stack;  // Stack for dequeue operations
  
    /**
     * Transfer elements from input_stack to output_stack
     * Only transfers when output_stack is empty to maintain order
     */
    void transferElements() {
        // Only transfer if output_stack is empty
        if (output_stack.empty()) {
            // Move all elements from input_stack to output_stack
            // This reverses the order, giving us FIFO behavior
            while (!input_stack.empty()) {
                output_stack.push(input_stack.top());
                input_stack.pop();
            }
        }
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
