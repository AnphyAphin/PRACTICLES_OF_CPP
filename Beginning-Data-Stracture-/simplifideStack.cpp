std::stack<std::string> history;

// 1. PUSH - Add to top
history.push("google.com");
history.push("login_page");
history.push("dashboard");

// 2. TOP - View top element (READ ONLY!)
std::cout << "Currently at: " << history.top() << std::endl;
// Output: dashboard

// 3. POP - Remove top (VOID function!)
history.pop();  // Removes "dashboard"
// Note: pop() returns void! So you can't do:
// string page = history.pop(); // ❌ COMPILE ERROR

// 4. SIZE - Number of elements
std::cout << "Pages in history: " << history.size() << std::endl;

// 5. EMPTY - Check if stack is empty
while (!history.empty()) {
    std::cout << "Going back to: " << history.top() << std::endl;
    history.pop();
}