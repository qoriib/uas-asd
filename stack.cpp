#include <iostream>

// Deklarasi nilai maksimum
#define max 5

using namespace std;

// Dekralasi nilai top dan array
int top = 0;
int stack[max];

bool isEmpty() {
    return top == 0;
}

bool isFull() {
    return top == max;
}

void push(int label) {
    if (isFull()) {
        cout << "Stack penuh" << endl;
    } else {
        stack[top] = label;
        top++;
    }
}

void pop() {
    if (isEmpty()) {
        cout << "Stack kosong" << endl;
    } else {
        stack[top] = 0;
        top--;
    }
}

int count() {
    return top;
} 

void view() {
    for (int i = top - 1; i >= 0; i--) {
        cout << stack[i] << endl;
    }
}

int main() {
    push(5);
    push(6);

    if (isEmpty()) {
        cout << "Stack kosong" << endl;
    } else {
        cout << "Stack berisi" << endl;
    }

    cout << "Jumlah elemen stack: " << count() << endl;
}
