struct Node {
    
    // variables
    int start;
    int * end;
    Node * suffix_link;
    Node * first_child;
    Node * next_sibling;

    // constructors
    Node(int start, int * end, Node * first_child, Node * next_sibling, Node * suffix_link);
    Node(int s, int * e);
    Node();

    // functions
    int edgeLen(int curend);
};

Node::Node(int s, int * e, Node * fc, Node * ns, Node * sl) {
    start = s;
    end = e;
    first_child = fc;
    next_sibling = ns;
    suffix_link = sl;
}

Node::Node(int s, int * e) {
    start = s;
    end = e;
    first_child = NULL, next_sibling = NULL, suffix_link = NULL;
}

Node::Node() {
    start = NULL, end = NULL, first_child = NULL, next_sibling = NULL, suffix_link = NULL;
}

int Node::edgeLen(int curend) {
    return std::min(*end, curend + 1) - start;
}
