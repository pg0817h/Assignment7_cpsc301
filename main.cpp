#include <iostream>
#include <string>
#include "linkedlist.cpp"
#include <fstream>
using namespace std;

void readFile(linkedlist & list, string & file) {
ifstream read(file);
while(!read.eof()){
file >>num;
node *temp = new node();
temp->data = num;
temp->next = NULL;
head = temp;

}


}

int main() {

    return 0;
}
