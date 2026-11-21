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
    while(c!=5) {
        cout << "1. add \n 2. delete \n 3. search \n 4. change \n 5. quit \n choice: ";
        cin >> c;
        if(c == 1) {
            cout << "Code: ";
            cin >> s;
        } else if(c == 2){
            cout << "Code: ";
            cin >> s;
            if(t.searchNode(s)){
                t.remove(s);
                cout << "Deleted" << endl;
            } else {
                cout << "Not there" << endl;
            }
        } else if (c == 3) {
            
        }
    }

    return 0;
}