#include <stdio.h>
#include <strings.h>
int i, x, key; //key rotation amount
char; //m=message number

//scanf("%c",&c);

//ASCII to ALPHA
//c = c - 65;

char str[100];
//printf("%s\n", str);
//scanf("%s", str);
 
//encryption eqt for rotation
//encryption = ((str + key) % 26);
//decryption eqt for rotation
//decryption = ((c - key) % 26);
printf("please enter 'key' 0-26 \n", key );
scanf("%d", &key);        //reading input of amount of 'key'



//encryption function
void rotation_enc();  //func def
{
for(i = 0; str[i] != '\0'; i++){   //count loop identifying end 
        
        if(str[i] >= 65 && str[i] <= 90) //values A-Z in ASCII
        str[i] = str[i]-key;  //moving letters
    }
    else if(str[i] < 65){  //only caps needed 
    str[i] = str[i] + 26;
    if (str[i] < 58){
        str[i] = '0';
    }
}
printf("encryption:  %s \n", str);
}

// rotation decryption function
void rotation_dec();
{
    for(i=0; i < str[i]; i++){
        str[i]= str[i] - key;
    }
}

// substitution encryption function
void substitution_enc();

// substitution decryption function
void substitution_dec();


int main() {
    // switch case to pick functions
    printf("please choose a function \n" );
    printf(" '1' rotation encryption \n");
    printf(" '2' rotation decryption \n");
    printf(" '3' substitution encryption \n");
    printf(" '4' substitution decryption \n");
   scanf("%d") 
    
    switch{
        case 1; void rotation_enc();
        
        case 2; void rotation_dec();
        
        case 3; void substitution_enc();
        
        case 4; void substitution_dec();
    }
    
    
    
    
    
    
    printf("please enter string \n", str);
    scanf("%s", str)
    //rotation cypher
   // printf("please select function. \n");
    //printf("1 = encryption cypher. \n");                            
   // printf("2 = decryption cypher. \n");
    //scanf("%d", &x);
    
    



  return 0;
}
