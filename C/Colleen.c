#include<stdio.h>
/*
    Non
*/
void function(){return ;}
int main(){
/*
    Oui
*/
function();
char*a="#include<stdio.h>%c/*%c    Non%c*/%cvoid function(){return ;}%cint main(){%c/*%c    Oui%c*/%cfunction();%cchar*a=%c%s%c;%cprintf(a,10,10,10,10,10,10,10,10,10,10,34,a,34,10);}";
printf(a,10,10,10,10,10,10,10,10,10,10,34,a,34,10);}