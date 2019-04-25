#include <stdio.h>

int i, x, key;

char c, m; //m=message number

scanf("%c",&c);

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
    //rotation cypher
    printf("please select function. \n");
    printf("1 = encryption cypher. \n");                            
    printf("2 = decryption cypher. \n");
    scanf("%d", &x);




  return 0;
}
