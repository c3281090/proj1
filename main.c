#include <stdio.h>

int main() {
    
    //variables
    int option; //Option chosen by user
    int key;
    char message;
    char chiper;

    //Ask for option from list
    printf("Please choose an option between 1 [ONE] and 6 [SIX] \n");
    
    //Scan for option chosen
    scanf("%d", &option);
    
    //Call required  function using switch/case 
    switch(option){
        case 1:
            //call function 1
            printf("Option 1 chosen \n");
            break;
            
        case 2:
            //call function 2
            printf("Option 2 chosen \n");
            break;
            
        case 3:
            //call function 3
            printf("Option 3 chosen \n");
            break;
            
        case 4:
            //call function 4
            printf("Option 4 chosen \n");
            break;
            
         case 5:
            //call function 5
            printf("Option 5 chosen \n");
            break;
            
        case 6:
            //call function 6
            printf("Option 6 chosen \n");
            break;
            
    }
    
    return(0);
    
}

//Functions

//1. Get message, and rotation key, encrypt

    printf("Please enter your message to be encrypted \n");
    scanf("%d", &message);
    printf("Now enter the rotation key \n");
    scanf("%d", &key);




//2. Get cipher text and rotation key, decrypt

    printf("Please enter cipher to be decrypted \n");
    scanf("%d", &cipher);
    printf("Now enter the rotation key \n");
    scanf("%d", &key);




//3. Get message and subsitution, encrypt



//4. Get cipher text and subsitution, decrypt



//5. Get cipher text, use rotation to decrypt

 
//6. Get cipher text, use substituion to decrypt

   
