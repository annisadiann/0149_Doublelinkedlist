#include <iostream>
#include <string>
using namespace std;

struct Node
{
    int noMhs;
    string name;
    Node* next;
    Node* prev;
};

Node* START = NULL;

void addNode() {
    Node* newNode = new Node(); //step 1 crate a new node
    cout << "\nEnter the roll number of the student : ";
    cin >> newNode->noMhs;      //Assign value to the data field of the new node
    cout << "\nEnter the name of the student : ";
    cin >> newNode->name;       //Assign value to the data field of the new node

    //Insert the new node in the list
} 
 

int main()
{
    std::cout << "Hello World!\n";
}

