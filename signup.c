#include<stdio.h>
#include <string.h>
void sign_up(){
char name[]="mohamed";
char password[]="123456789";
char password_confirmation[]="123456789";
int check=strcmp(name, password);
if (strlen(password)<8 && strlen(password_confirmation)<8){
    printf("the password is too short");
}
else if (check!=1){
    printf("the password and confirmation is not equal");
}
else{
    printf("welcome");
    printf("%s",name);
}
}
int main (void){
sign_up();

    return 0;
  
}