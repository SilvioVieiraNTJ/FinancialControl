int selectMonth(Year year){
    char month[20];
    int i;
    for ( i = 0; i < 12; i++){        
        if (strcmp(month, year.months[i].name)){
            return i;
        }
    }
    return -1;
}

int selectChoice(){
    int choice;
    scanf("%d", &choice);
    getchar();
    return choice;
}

void showOutput(Output account){
    printf("name: %s value: %f pay method: %s paid installments: %d amount installments: %d status: %s \n" ,
    account.name, account.value, account.pay_method, account.paid_installments, account.amount_installments, account.status);
}

void showInput(Input contribution){
    printf("name: %s value: %f pay method: %s \n" ,
    contribution.name, contribution.value, contribution.payment_method);
}

void showAllOutputsOfTheYear(Year year){
    int i;
    for ( i = 0; i < 12; i++){
        
    }
    
}

void showAllOutputsOfTheMonth(Year year, int month){

}