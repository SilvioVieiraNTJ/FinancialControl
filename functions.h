void initoNode(oNode** node){
    *node = NULL;
}
void initiNode(iNode** node){
    *node = NULL;
}

iNode* getiNode(Input new_data){
    iNode* new_node = (iNode*) malloc(sizeof(iNode));
    initiNode(&new_node);
    if (new_node == NULL){
        printf("error.\n");
        return NULL;
    }
    new_node->data = new_data;
    return new_node;
}

oNode* getoNode(Output new_data){
    oNode* new_node = (oNode*) malloc(sizeof(oNode));
    initoNode(&new_node);
    if (new_node == NULL){
        return NULL;
    }
    new_node->data = new_data;
    return new_node;
}
