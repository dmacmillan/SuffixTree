#include <iostream>
#include "SuffixTree.h"

int main() {
    SuffixTree s("hello");
    Node n (0, &s.current_end);
    s.root.first_child = &n;
    s.current_end++;
    Node m (1, &s.current_end);
    n.next_sibling = &m;
    s.current_end++;
    s.activeNodeContainsSuffix();
}
