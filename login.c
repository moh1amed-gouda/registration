#include<stdio.h>
#include <string.h>
void log_in(Enter_password){
    char name[]="mohamed";
    char password[]="123456789";
    int check=strcmp(name, password);
if (check!=1){
    printf("the password is not correct please Enter the correct password");

}
else{
    printf("hello");
    printf("%s",name);
}
}
int main (void){
log_in("123456789");

    return 0;
  
}
