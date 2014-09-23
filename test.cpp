#include <iostream>
#include "SuffixTree.h"

int main() {
    SuffixTree s("hello");
    Node n (0, &s.current_end);
    s.current_end++;
    Node m (1, &s.current_end);
    s.current_end++;
    cout << m.edgeLen(s.current_end);
}
