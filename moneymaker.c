#include <stdio.h>

int i, x, key; //key rotation amount
char c, m; //m=message number

scanf("%c",&c);

//ASCII to ALPHA
c = c - 65;

char str[26];
//printf("%s\n", str);
//scanf("%s", str);
 
//encryption eqt for rotation
//encryption = ((m + key) % 26);
//decryption eqt for rotation
//decryption = ((c - key) % 26);
printf("please enter 'key'\n");
scanf("%d", &key);
int main() {
    
    printf("please enter string \n");
    scanf("%s", string)
    //rotation cypher
    printf("please select function. \n");
    printf("1 = encryption cypher. \n");                            
    printf("2 = decryption cypher. \n");
    scanf("%d", &x);
    
    for(i = 0 < 26 && str[i] != '\0')




  return 0;
}
