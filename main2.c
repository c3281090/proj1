//c3281090
//ENGG1003 Programming Assignment 1
//Each function shows what input is needed by user

#include <stdio.h>

int encryptRotation(int option);
int decryptRotation(int option);
int encryptSub(int option);
int decryptSub(int option);
int exampleFive(int option);
int exampleSix(int option);
  
  
int main() {
    
    //variables
    int option; //Option chosen by user
   
    scanf("%d", &option); //Line 1 of file
    
    //Call required  function using switch/case 
    switch(option){
        case 1:
            //call function 1
            encryptRotation(option);
            break;
            
        case 2:
            //call function 2
            decryptRotation(option);
            break;
            
        case 3:
            //call function 3
            encryptSub(option);  
            break;
            
        case 4:
            //call function 4
            decryptSub(option);
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
 int encryptRotation(int option){
    
    printf("Option 1 chosen \n");
        
    int i, rotationKey; //rotaiton key and counter 
    char message[1000]; //Message to be encrypted
   
    scanf("%s", &message); //Line 2 of file
    scanf("%d", &rotationKey); //Line 3 of file
   
    for(i = 0; (i < 100 && message[i] != '\0'); i++)
        message[i] = message[i] + rotationKey; 

    printf("The encrypted message is %s\n", message);
 }
 

//2. Get cipher text and rotation key, decrypt 
  int decryptRotation(int option){
     printf("Option 2 chosen \n");
     
    int i, rotationKey; //rotaiton key and counter 
    char cipher[1000]; //Encrypted message to be decrypted 
   

    scanf("%s", &cipher); //Line 2 of file
    scanf("%d", &rotationKey); //line 3 of file
   
   
    for(i = 0; (i < 100 && cipher[i] != '\0'); i++)
        cipher[i] = cipher[i] - rotationKey; 

    printf("The decrypted message is %s\n", cipher);
     
 }
 
 
 //3. Get message and subsitution, encrypt
  int encryptSub(int option){
     printf("Option 3 chosen \n");
 }

 //4. Get cipher text and subsitution, decrypt
  int decryptSub(int option){
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













   
