#include <iostream>
#include "BST.h"
#include <cstdlib>
int main() {
        Tree<int> * t = new Tree<int>();


        for (int i = 0; i < 10; ++i) {
            int * j = (int*)malloc(sizeof(int));
            *j = i;


            t->insert(j);
        }
        int n = 5;
        int * np = &n;
        cout << *t->min() << endl;
        cout << *t->max() << endl;
        cout << *t << endl;
        t->remove(np);
        cout << *t;
    return 0;
}
