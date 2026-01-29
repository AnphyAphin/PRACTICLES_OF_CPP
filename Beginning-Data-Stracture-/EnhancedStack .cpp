// TASK: Create a stack that tracks MAX value too
class EnhancedStack {
    int mainStack[100];
    int maxStack[100];  // Parallel stack for max values
    int topIndex;
    
public:
    EnhancedStack() { topIndex = -1; }
    
    void push(int x) {
        // TODO: Push to mainStack
        // Also push to maxStack: current max or x
    }
    
    int getMax() {
        // TODO: Return top of maxStack
    }
    
    // Complete the implementation
};