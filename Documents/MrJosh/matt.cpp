#include<iostream>

using namespace std;

class node {
    public :
    int value;
    node* left;
    node* right;
    node* parent;
};

int main () {
    int array[10];
for (int i = 0; i < 10; i++) {
    cout << "Put number NOW! HERE:";
    cin >> array[i];
}
    node *rootnode = nullptr;
    node *pointernode = nullptr;

    for (int i=0; i < 10; i++) {
        if(rootnode) {
            pointernode = rootnode;
            node *destnode = rootnode;
            do {
                pointernode = destnode;
                if (pointernode->value > array[i]) {
                    destnode = pointernode->left;
                }
                else {
                    destnode = pointernode->right;
                }
            } while (destnode);

            destnode = new node();
            destnode->value = array[i];
            destnode->left = nullptr;
            destnode->right = nullptr;

            destnode->parent = pointernode;
            if (pointernode->value > destnode->value) {
                pointernode->left = destnode;
            }
            else {
                pointernode->right = destnode;
            }
        }
        else {
            rootnode = new node();
            rootnode->value = array [i];
            rootnode->left = nullptr;
            rootnode->right = nullptr;
            rootnode->parent = nullptr;
        }
    }
    cout << "Binary tree has been created" << endl;
    cout << "BINARY TREE SEARCH" << endl;
    int searchvalue = 0;
    cout << "What number do you want to find in the tree?" << endl;
    cin >> searchvalue;

    pointernode = rootnode;
    while(pointernode) {
        if (pointernode->value == searchvalue) {
            break;
        }
        else if (pointernode->value > searchvalue) {
            pointernode = pointernode->left;
        }
        else {
            pointernode = pointernode->right;
        }
    }
    if (pointernode) {
        cout << "Number is in the binary tree!";
    }
    else {
        cout << "Number is not in the binary tree!";
    }
}