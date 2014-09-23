struct ActivePoint {
    
    // variables
    // The node from which we insert the next suffix
    Node * actnode;
    char actedge;
    // Length of the string represented by the active node
    int actlength;

    //constructor
    ActivePoint();
    ActivePoint(Node * an, char ae, int al);
};

ActivePoint::ActivePoint(Node * an, char ae, int al) {
    actnode = an;
    actedge = ae;
    actlength = al;
}

ActivePoint::ActivePoint() {
    actnode = NULL;
    actedge = NULL;
    actlength = NULL;
}
