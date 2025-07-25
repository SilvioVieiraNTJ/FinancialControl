void initOutputNode(OutputNode** node){
    *node = NULL;
}
void initInputNode(InputNode** node){
    *node = NULL;
}

InputNode* getInputNode(Input new_data){
    InputNode* new_node = (InputNode*) malloc(sizeof(InputNode));
    initInputNode(&new_node);
    if (new_node == NULL){
        printf("error.\n");
        return NULL;
    }
    new_node->data = new_data;
    return new_node;
}

OutputNode* getOutputNode(Output new_data){
    OutputNode* new_node = (OutputNode*) malloc(sizeof(OutputNode));
    initOutputNode(&new_node);
    if (new_node == NULL){
        return NULL;
    }
    new_node->data = new_data;
    return new_node;
}
