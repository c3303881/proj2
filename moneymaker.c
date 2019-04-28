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
       str = toupper (str[i]- 'A');
         if(str[i] >= 'A' && str[i] <= 'Z'){//values A-Z in ASCI
           str[i] = str[i] - key;
         }//moving letters
          if(str[i] < 65){  //only caps needed 
           str[i] = str[i]+26;
           
             if (str[i] == 32){
             str[i] = '0';
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
           
              if (str[i] == 32){
             str[i] = '0';
             }
          }
    }
    printf("decryption is; %s \n",str);

}

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
    
    char encrypted[26] = {'B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A'};
}

// substitution decryption function
void substitution_dec();{
    
    char encrypted[26] = {'B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A'};
}


int main() {
    
    printf("please enter string \n", str);
    scanf("%s", str)
    printf("please enter 'key' 0-26 \n", key );
    scanf("%d", &key);
    
    // switch case to pick functions
     while(1){
    printf("please choose a function \n" );
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
