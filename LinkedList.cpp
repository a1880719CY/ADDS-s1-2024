#include "linkedlist.h"
#include <iostream>
#include <limits>

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::LinkedList(int* array, int len) {
    head = new Node(array[0], nullptr);
    if (len > 1){
        Node* preNode = head;

        for (int i = 1; i < len; i++){
            Node* currNode = new Node(array[i], nullptr);
            preNode->link = currNode;
            preNode = currNode;
        }
    }
}

LinkedList::~LinkedList() {
    while(head != nullptr) {
        deleteFromFront();
    }
}

void LinkedList::printList() {
    if (head == nullptr){
        return;
    }
    Node* currNode = head; 
    std::cout << "[ " << std::endl; 
    while (currNode != nullptr) { 
        std::cout << currNode->data << " " << std::endl; 
        currNode = currNode->link; 
    } 
    std::cout << "]" << std::endl; 
}

Node* LinkedList::traverse(unsigned int index) {
    unsigned int position = 0;
    Node* currNode = head; 

    while (currNode != nullptr && position < index) { 
        currNode = currNode->link; 
        position++;
    } 
    
    return currNode;
}

void LinkedList::insertPosition(int pos, int newNum) {
    // if adding in front of the current head (including if the list is empty)
    if (pos == 1) {
        head = new Node(newNum, head);
        return;
    }

    // if inserting between two nodes; i.e. [A, C] -> [A, B, C]
    Node *prevNode = traverse(pos-2);

    // if inserting out of bounds, abort
    if (prevNode == nullptr) {
        Node *newNode  = new Node(newNum, nullptr);
        prevNode->link = newNode;
        return;
    }

    Node *newNode  = new Node(newNum, prevNode->link);
    prevNode->link = newNode;
}

void LinkedList::deleteFromFront() {
    if (head == nullptr) {
        return;
    }

    Node* temp = head;
    head = head->link;
    delete temp;
}

bool LinkedList::deletePosition(int pos){

    if (head == nullptr) {
        return false;
    }
    unsigned int position = 1;
    Node* currNode = head; 

    while (currNode != nullptr && position < pos) { 
        currNode = currNode->link; 
        position++;
    } 
    if (position == pos){


        Node *prevNode = traverse(pos-2);

        prevNode->link = currNode->link;
        delete currNode;
        return true;
        
    } else {

        return false;
    }

}

int LinkedList::get(int pos){

    unsigned int position = 1;
    Node* currNode = head; 

    while (currNode != nullptr && position < pos) { 
        currNode = currNode->link; 
        position++;
    } 
    if (position == pos){

        return currNode->data;
    } else {

        return std::numeric_limits < int >::max();
    }
}

int LinkedList::search(int target){

    if (head->data == target){

        return 0;

    }
    unsigned int index = 0;
    Node* currNode = head; 

    while (currNode != nullptr) { 
        currNode = currNode->link; 
        index++;
        if (head->data == target){

            return index;

        }
    }

    return -1;
    
}

