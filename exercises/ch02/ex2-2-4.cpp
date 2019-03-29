#include <bits/stdc++.h>

using namespace std;

/* We can also use linked list (C++ STL list) to implement an efficient queue.
 * Figure out how to achieve this. Follow up question: Can we use a resizeable array instead?
 * Why or why not?
 */
template <class T>
struct Queue {
    void dequeue() {
        _queue.pop_front();
    }

    void push(T t) {
        _queue.push_back(t);
    }

    T peek() {
        return _queue.front();
    }

private:
    list<T> _queue;
};

/* To use a resizeable array to implement a queue, just keep track of the front and back 
 * index in the array and remove elements from the front index and insert on the back index.
 * If the queue ever goes empty, move the front and back index to the first position.
 * Also if the queue grows a lot, you can resize the array and reset the front and back index
 * to the relative size.
 */
