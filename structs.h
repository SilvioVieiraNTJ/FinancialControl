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

typedef struct OutputNode { // output node
    Output data;
    struct OutputNode* next;
}OutputNode;

typedef struct InputNode { // input node
    Input data;
    struct InputNode* next;
}InputNode;

typedef struct Month {
    char name[20];
    OutputNode* outputs;
    InputNode* inputs;
}Month;

typedef struct Year {
    Month months[12];
}Year;



