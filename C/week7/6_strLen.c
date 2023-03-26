#include <stdio.h>
#include <string.h> // strcpy and strlen must be pointer in only array
int main() {
char name[20]; // if one[] mean quantity of char
int len;
strcpy(name,"David");
len = strlen(name);
printf("Length of %s is %d\n", name, len);
strcpy(name,"David James");
len = strlen(name);
printf("Length of %s is %d\n", name, len);
printf("%c %c %c",name[4],name[5],name[6]); // count blank = 1 array too

return 0;
}