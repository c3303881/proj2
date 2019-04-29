//ENG1003
//ASSIGNMENT 1 
//TALESIN COURT-KRIESCH
//C3303881
//PROGRAM THAT TAKES A MESSAGE, ENCRYPTS IT AND DECRYPTS IT AGAIN USING ROTATION AND SUBSTITUTION CYPHERS
//LAB THURS 2-5





#include <stdio.h>
#include <strings.h>
#include <ctype.h>
int i, key, choice; //key rotation amount
char //m=message number

//scanf("%c",&c);

//ASCII to ALPHA
//c = c - 65;

char str[1024];
//printf("%s\n", str);
//scanf("%s", str);



//encryption function
void rotation_enc();  //func def
{
    for(i = 0; str[i] != '\0'; i++){   //count loop identifying end 
       str[i] = toupper (str[i]);    //toupper function to convert lowercase letters to upper
         if(str[i] >= 'A' && str[i] <= 'Z'){//values A-Z in ASCI     
           str[i] = str[i] - key;                                      // couldnt figure out computation with % 26, using loop
         }//moving letters                                             //counting between 65-90 ascii values A and Z
          if(str[i] < 65){  //only caps needed 
           str[i] = str[i]+26;
           
             if (str == '32'){     //if character in string is equal to ascii 32 print space
             str[i] = "space";
            }
        }
    }
printf("encryption:  %s \n", str);

}

  
// rotation decryption function

void rotation_dec();
{
   for(i = 0; i < str[i]; i++){   //count loop identifying end 
         if(str[i] >= 'A' && str[i] <= 'Z'){//values A-Z in ASCII
         str[i] = str[i] + key;
         }//moving letters
          if(str[i] > 90){  //only caps needed 
           str[i] = str[i]-26;
           
              if (str == '32'){
             str[i] = "space";
             }
          }
    }
    printf("decryption is; %s \n",str);

}
//BOTH ROTATION ENCRYPTION AND DECRYPTION WORK ON THEIR OWN
// WITH INCLUSION OF  int i, key;
    //char str[1024];
    //printf("please enter string \n");
   //scanf("%s", str);
   // printf("please enter 'key' 0-26 \n");
   //scanf("%d", &key);
 // IN THE MAIN

// substitution encryption function
void substitution_enc();{
    
    for ( i = 0; i< str; i++){
       str = toupper(str[i])-'A';
       if(str[i] >= 65 && str[i] <=90){
           str[i] = encrypted[str[i]];
       }else{
           str[i]= str[i]
       }
   }
    //initialysing substituted/encrypted characters 
    char encrypted[26] = {'B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A'};
    printf("encryption is:  %s\n", str);
}

// substitution decryption function
void substitution_dec();{
    
    char encrypted[26] = {'B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A'};
    printf("decryption is:  %s\n", str);
}


int main() {
    
    printf("please enter string \n", str);
    scanf("%s", str)
    printf("please enter 'key' 0-26 \n", key );
    scanf("%d", &key);
    
    // switch case to pick functions
     while(1){                                       // user interface using printf and scanf within a switchcase...
    printf("please choose a function \n" );          // that calls the seperate encryption/decryption functions when selected
    printf(" '1' rotation encryption \n");
    printf(" '2' rotation decryption \n");
    printf(" '3' substitution encryption \n");
    printf(" '4' substitution decryption \n");
    printf(" '5' exit \n");
   scanf("%d", &choice) 
    
    switch(choice){                                    //switch case for selection of function 
        case 1: void rotation_enc();                   
        break;
        case 2: void rotation_dec();
        break;
        case 3: void substitution_enc();
        break;
        case 4: void substitution_dec();
        break;
        case 5: exit(0)
        }
    }

  return 0;
}
