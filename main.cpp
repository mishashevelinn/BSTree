#include <iostream>
#include "BST.h"
#include <cstdlib>
int main() {
        Tree<int> * t = new Tree<int>();

        for (int i = 0; i < 10; ++i) {
            t->insert(&i);

}
        cout << *t;
        delete t;


    return 0;
}
