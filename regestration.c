#include<stdio.h>
#include <string.h>
// function for cheack password for sign up
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
    printf("the sign up completed ");
    printf("%s",name);
}
}
// function for cheack the regestration 
void log_in(Enter_password){
    char name[]="mohamed";
    char password[]="123456789";
    int check=strcmp(name, password);
if (check!=1){
    printf("the password is not correct please Enter the correct password");

}
else{
    printf("hello ");
    printf("%s",name);
}
}
int main (void){
//sign_up();
 log_in("123456789");
    return 0;
  
}
