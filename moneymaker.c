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
scanf("%d", &key);






//encryption function
void rotation_enc();
{
for(i = 0; str[i] != '\0'; i++){
        
        if(str[i] >= 65 && str[i] <= 90)
        str[i] = str[i]-key;
    }
    else if(str[i] < 65){
    str[i] = str[i] + 26;
    if (str[i] < 58){
        str[i] = '0';
    }
}
printf("encryption:  %s \n", str);
}

//decryption function
void rotation_dec();
{
    for(i=0; i < str[i]; i++){
        str[i]= str[i] - key;
    }
}





int main() {
    
    printf("please enter string \n", str);
    scanf("%s", str)
    //rotation cypher
   // printf("please select function. \n");
    //printf("1 = encryption cypher. \n");                            
   // printf("2 = decryption cypher. \n");
    //scanf("%d", &x);
    
    



  return 0;
}
