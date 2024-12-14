/*
Jadiha Aruleswaran
21009117
01/06/2022
SYDE 121
Assignment 10
*/

#include <iostream>
#include <string>
using namespace std;

struct Node
{
    char data;
    Node *next;
};

struct Stack
{
    Node *head;

    void push(char data)
    {
        Node *newNode = new Node{data, head};
        head = newNode;
    }

    char pop()
    {
        if (head == nullptr)
        {
            return '\0';
        }

        char data = head->data;
        head = head->next;
        return data;
    }

    bool isEmpty()
    {
        return head == nullptr;
    }
};

int main()
{
    string wordinput;
    cout << "Enter a word of your choice: ";
    cin >> wordinput;

    Stack stack;
    for (char c : wordinput)
    {
        stack.push(c);
    }

    cout << "Your word in reverse is the following: ";

    while (!stack.isEmpty())
    {
        cout << stack.pop();
    }

    cout << endl;

    return 0;
}