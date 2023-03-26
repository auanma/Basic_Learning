#include <stdio.h>
#include <string.h>
int main(){
char a[20] = "UNIVERSITY";
printf("%s\n", a);
strcpy(a, "ABCD"); // write data instead
printf("%s\n", a);
strcpy(a, "0123456789");
printf("%s\n", a);

return 0;
}