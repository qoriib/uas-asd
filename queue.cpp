#include <iostream>
#define max 5

using namespace std;

int R = 0;
int queue[max];

bool isEmpty() {
    return R == 0;
}

bool isFull() {
    return R == max;
}

int count() {
    return R;
}

void enqueue(int label) {
    if (isFull()) {
        cout << "Queue penuh" << endl;
    } else {
        queue[R] = label;
        R++;
    }
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong" << endl;
    } else {
        for (int i = 0; i < R; i++) {
            queue[i] = queue[i + 1];
        }

        queue[R] = 0;
        R--;
    }
} 

void view() {
    for (int i = 0; i < R; i++) {
        cout << queue[i] << " ";
    }

    cout << endl;
}

int main() {
    enqueue(5);
    dequeue();
    dequeue();
    view();
}