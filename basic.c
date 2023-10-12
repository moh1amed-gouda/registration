#include<stdio.h>
#include <string.h>
void sign_up(){
char name[]="mohamed";
char password[]="123456789";
char password_confirmation[]="123456789";
if (strlen(password)<8 && strlen(password_confirmation)<8){
    printf("the password is too short");
}
else if (password !=password_confirmation){
    printf("the password and confirmation is not equal");
}
else{
    printf("welcome");
    printf("%s",name);
}
}
void log_in(Enter_password){
    char name[]="mohamed";
    char password[]="123456789";
if (Enter_password!=password){
    printf("the password is not correct please Enter the correct password");

}
else{
    printf("hello");
    printf("%s",name);
}
}
int main (void){
//sign_up();
log_in("123456789");
    return 0;
  
}




