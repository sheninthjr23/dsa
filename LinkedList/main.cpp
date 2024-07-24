#include<iostream>
#include<vector>

using namespace std;

class Node {    
    public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

bool deleteAtSpecificPosition(Node*& head,int position) {
    if (head == nullptr || position < 1) return false;
    if(position == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return true;
    }
    Node* temp = head;
    int currPosition = 1;
    while(temp != nullptr && currPosition < position - 1) {
        temp = temp->next;
        currPosition++;
    }
    if(temp == nullptr || temp->next == nullptr) {
        return false;
    }
    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
    return true;
}

void insertAtSpecificPosition(Node*& head,int position,int data) {
    Node* newNode = new Node(data);
    if(head == nullptr) {
        head = newNode;
    }
    else {
        Node* temp = head;
        int curr = 1;
        while(temp) {
            if(curr == position - 1) {
                newNode->next = temp->next;
                temp->next = newNode;
            }
            curr++;
            temp = temp->next;
        }
    }
}

void insertValueToBegining(Node*& head, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertValueToLinkedList(Node*& head, int data) {
    Node* newNode = new Node(data);
    if(head == nullptr) {
        head = newNode;
    }
    else {
        Node* temp = head;
        while(temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int lengthOfLinkedList(Node* head) {
    int count = 0;
    Node* temp = head;
    while(temp) {
        temp = temp->next;
        count++;
    }
    return count;
}

Node* convertArrayToLinkedList(vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void traveralLinkedList(Node* head) {
    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


int main() {
    vector<int> arr = {1,2,3,4,5};
    Node* y = convertArrayToLinkedList(arr);
    bool ans = deleteAtSpecificPosition(y,1);
    cout << ans << endl;
    traveralLinkedList(y);
    return 0;
}

