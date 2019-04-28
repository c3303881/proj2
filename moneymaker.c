#include <stdio.h>
#include <strings.h>
int i, x = 0, key; //key rotation amount
char //m=message number

//scanf("%c",&c);

//ASCII to ALPHA
//c = c - 65;

char str[1024];
//printf("%s\n", str);
//scanf("%s", str);
 
//encryption eqt for rotation
//encryption = ((str + key) % 26);
//decryption eqt for rotation
//decryption = ((c - key) % 26);
        //reading input of amount of 'key'



//encryption function
void rotation_enc();  //func def
{
    char str[1024];
    int i;
    for(i = 0; str[i] != '\0'; i++){   //count loop identifying end 
      
         if(str[i] >= 'A' && str[i] <= 'Z'){//values A-Z in ASCII
          //str ='A' + (str +'A' - key) %26;
         //str[i] = str[i] - key;
         }//moving letters
          if(str[i] < 65){  //only caps needed 
           str[i] = str[i]+26;
           
             if (str[i] == 58){
             str[i] = ' ';
            }
        }
    }
printf("encryption:  %s \n", str);

}


// rotation decryption function
void rotation_dec();
{
    int i;
     for(i = 0; i < str[i]; i++){
        str[i]= str[i] - key;
    }
}

// substitution encryption function
void substitution_enc();

// substitution decryption function
void substitution_dec();


int main() {
    
    printf("please enter string \n", str);
    scanf("%s", str)
    printf("please enter 'key' 0-26 \n", key );
    scanf("%d", &key);
    
    // switch case to pick functions
    printf("please choose a function \n" );
    printf(" '1' rotation encryption \n");
    printf(" '2' rotation decryption \n");
    printf(" '3' substitution encryption \n");
    printf(" '4' substitution decryption \n");
    printf(" '5' exit \n");
   scanf("%d") 
    
    switch{                                    //switch case for selection of function 
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
    
    
    
    
    
    
    
    //rotation cypher
   // printf("please select function. \n");
    //printf("1 = encryption cypher. \n");                            
   // printf("2 = decryption cypher. \n");
    //scanf("%d", &x);
    
    



  return 0;
}
