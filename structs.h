typedef struct Output { // account
    int id, status, amount_installments, paid_installments, refference_month;
    double value;
    char name[50], type[10], pay_method[15];
}Output;

typedef struct Input { // contribution
    int id, refference_month;
    double value;
    char name[50], payment_method[15];
}Input;

typedef struct oNode { // output node
    Output data;
    struct oNode* next;
}oNode;

typedef struct iNode { // input node
    Input data;
    struct iNode* next;
}iNode;

typedef struct Month {
    char name[20];
    oNode* outputs;
    iNode* inputs;
}Month;

typedef struct Year {
    Month months[12];
}Year;



