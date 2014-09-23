//#include <vector>
#include <string>
#include "Node.h"
#include "ActivePoint.h"
using namespace std;

struct SuffixTree {
    
    // constructor
    SuffixTree(string read);

    // variables
    int remainder;
    int current_start;
    int current_end;
    Node root;
    string read;
    ActivePoint ap;

    // functions
    bool containsSuffix(Node * an);

};

SuffixTree::SuffixTree(string r) {
    read = r;
    remainder = 1;
    current_start = 0;
    current_end = 0;
    Node root (0,0);
    ap.actnode = &root;
    ap.actedge = r[0];
    ap.actlength = 0;
}

bool SuffixTree::containsSuffix(Node * an) {
    //if (ap.actnode->firstchild
    return true;
}
