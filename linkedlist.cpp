#include "linkedlist.h"

linkedlist::linkedlist() {
head = NULL;
node *temp = new node();
}

linkedlist::~linkedlist() {
    // RECURSIVE
}

int linkedlist::count() {
    // RECURSIVE
}

void linkedlist::addToFront(int n) {


temp->data = n;
temp->next = NULL;

head = temp;


}

double linkedlist::average() {
    // uses sum and count functions
}

int linkedlist::sum() {
    // RECURSIVE
}

void linkedlist::writeInorder(string & file) {

}

void linkedlist::writeReversed(string & file) {
    // RECURSIVE
}
