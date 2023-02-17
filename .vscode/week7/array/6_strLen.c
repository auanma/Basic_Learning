#include <stdio.h>
#include <string.h>
int main() {
char name[20]; // if one[] mean quantity of char
int len;
strcpy(name,"David");
len = strlen(name);
printf("Length of %s is %d\n", name, len);
strcpy(name,"David James");
len = strlen(name);
printf("Length of %s is %d\n", name, len);
printf("%c",name[5]); // count blank = 1 array too

return 0;
}