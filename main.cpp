#include <iostream>
#include "BST.h"
#include <cstdlib>
int main() {
        Tree<int> * t = new Tree<int>();

        for (int i = 0; i < 10; ++i) {
            t->insert(&i);

}
        int k = 3;
        t->insert(&k);
        t->remove(&k);
        cout << *t << endl;

        cout << t->get_size();





    return 0;
}
