#include <iostream>
using namespace std;

#define SIZE 100

struct Stack {
    int arr[SIZE];
    int top;

    Stack() {
        top = -1;
    }

    void push(int val) {
        if (top == SIZE - 1) {
            cout << "Stack is Full" << endl;
            return;
        }
        arr[++top] = val;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is Empty" << endl;
            return;
        }
        cout << "Popped Element: " << arr[top--] << endl;
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack is Empty" << endl;
        } else {
            cout << "Top Element: " << arr[top] << endl;
        }
    }

    bool isEmpty() {
        return top == -1;
    }

    void display() {

        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack experiment;

    experiment.push(10);
    experiment.push(20);
    experiment.push(30);
    //experiment.pop();
    // experiment.isEmpty();
     //experiment.peek();
    experiment.display();

 while (!experiment.isEmpty()) {
    experiment.pop();
          }

      if (experiment.isEmpty())
        cout << "Stack is empty!" << endl;
    else
        cout << "Stack is not empty!" << endl;



    return 0;
}
