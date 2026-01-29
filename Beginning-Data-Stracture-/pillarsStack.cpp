class Stack {
    int arr[100];
    int topIndex;  // CRITICAL: Always tracks the top
    
public:
    Stack() { topIndex = -1; }  // -1 means EMPTY
    
    // 1. PUSH: Add to top
    void push(int x) {
        if (topIndex >= 99) {  // Check overflow
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++topIndex] = x;  // Increment FIRST, then assign
    }
    
    // 2. POP: Remove from top
    int pop() {
        if (isEmpty()) {  // Check underflow
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        return arr[topIndex--];  // Return THEN decrement
    }
    
    // 3. TOP/PEEK: See top element (NO removal)
    int top() {
        if (isEmpty()) return -1;
        return arr[topIndex];  // Just look, don't change topIndex
    }
    
    // 4. ISEMPTY: Check if stack has elements
    bool isEmpty() {
        return (topIndex == -1);  // Simple but crucial
    }
};