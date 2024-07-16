#include<iostream>

using namespace std;

class Node {
    private:
        int val;
        Node* next;
    public:
        Node(int data) {
            val = data;
            next = nullptr;
        }
};


class LinkedList : public Node {
    public:
        Node* head;

        void push(int data) {
            Node* node = new Node(data);
            while(head->next != nullptr) {
                head = head->next;
            }
            node = 
        }
}

int main() {

    return 0;
}