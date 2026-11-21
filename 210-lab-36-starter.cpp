//Maxwell Koegler | COMSC 210 | LAB 36 (from starter)

#include "IntBinaryTree.h"
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    IntBinaryTree t;
    ifstream f("codes.txt");

    string s;
    while(f >> s) {
        t.insertNode(s);
    }
    f.close();

    t.displayInOrder();

    int c = 0;
    while(c!=5) { //insertion
        cout << "1. add \n 2. delete \n 3. search \n 4. change \n 5. quit \n choice: ";
        cin >> c;
        if(c == 1) {
            cout << "Code: ";
            cin >> s;
            t.insertNode(s);
        } else if(c == 2){ //deletion
            cout << "Code: ";
            cin >> s;
            if(t.searchNode(s)){
                t.remove(s);
                cout << "Deleted" << endl;
            } else {
                cout << "Not there" << endl;
            }
        } else if (c == 3) { //search
            cout << "Code: ";
            cin >> s;
            if (t.searchNode(s)) {
                cout << "Found " << endl;
            } else {
                cout << "Not there " << endl;
            }
        } else if(c == 4) { //modify
            string n;
            cout << "Old code: ";
            cin >> s;
            if (t.searchNode(s)) {
                cout << "New code: ";
                cin >> n;
                t.remove(s);
                t.insertNode(n);
                cout << "Modified " << endl;
            } else {
                cout << "Not there " << endl;
            }
        } else {
            cout << "exiting";
        }
    }

    return 0;
}