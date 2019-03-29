#include <bits/stdc++.h>

using namespace std;

/* We can also use a resizeable array (C++ STL vector) to implement an efficient stack.
 * Figure out how to achieve this. Follow up question: Can we use a static array, linked list,
 * or deque instead? Why or why not?
 */
template <class T>
struct Stack {
    void pop() {
        _stack.pop();
    }

    void push(T t) {
        _stack.push_back(t);
    }

    T peek() {
        _stack.back();
    }

private:
    vector<T> _stack;
};

/*
 * Using a static array to implement a stack, you need to keep track of the top element index and
 * push values in this index + 1, or pop the element at this index. A static array won't be able to
 * resize in case you have too many elements. A linked list would be easier to do this, since you
 * only need to add and remove elements only at the head, or tail, as long as both insertion and
 * deletion happens in the same edge of the Linked List.
 */
