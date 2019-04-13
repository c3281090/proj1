#include <stdio.h>

int exampleOne(int option);
int exampleTwo(int option);
int exampleThree(int option);
int exampleFour(int option);
int exampleFive(int option);
int exampleSix(int option);


int main() {
    
    //variables
    int option; //Option chosen by user
   // int key;
  //  char message[1000], ch;
   // char chiper;
    
    //Ask for option from list
    printf("Please choose an option between 1 [ONE] and 6 [SIX] \n");
    
    //Scan for option chosen
    scanf("%d", &option);
    
    //Call required  function using switch/case 
    switch(option){
        case 1:
            //call function 1
            exampleOne(option);
            break;
            
        case 2:
            //call function 2
            exampleTwo(option);
            break;
            
        case 3:
            //call function 3
            exampleThree(option);  
            break;
            
        case 4:
            //call function 4
            exampleFour(option);
            break;
            
         case 5:
            //call function 5
            exampleFive(option);
            break;
            
        case 6:
            //call function 6
            exampleSix(option);
            break;
            
    }
    
    return(0);
    
}


//Functions

//1. Get message, and rotation key, encrypt
 int exampleOne(int option){
     printf("Option 1 chosen \n");
 }

//2. Get cipher text and rotation key, decrypt 
  int exampleTwo(int option){
     printf("Option 2 chosen \n");
 }
 
 //3. Get message and subsitution, encrypt
  int exampleThree(int option){
     printf("Option 3 chosen \n");
 }
 
 //4. Get cipher text and subsitution, decrypt
  int exampleFour(int option){
     printf("Option 4 chosen \n");
 }

//5. Get cipher text, use rotation to decrypt 
  int exampleFive(int option){
     printf("Option 5 chosen \n");
 }
 
 //6. Get cipher text, use substituion to decrypt
  int exampleSix(int option){
     printf("Option 6 chosen \n");
 }





    //printf("Please enter your message to be encrypted \n");
    //scanf("%d", &message);
    //printf("Now enter the rotation key \n");
    //scanf("%d", &key);
    








   
