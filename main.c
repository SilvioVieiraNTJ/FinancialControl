#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "structs.h"
#include "functions.h"
#include "view.h"


int main(){
    Year year;
    int choice;
    do {
        choice = selectChoice();
        switch (choice){
            case 1:
                // case 1
            break;
            
            default:
                if (choice != 0){
                    printf("error.\n");
                }
            break;        
        }
    } while (choice != 0);
    
    
    return 0;
}