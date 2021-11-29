#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(){
int i = 5;
char base[10] = {'S','u','l','l','y','_',i+48,'.','c','\0'}, child[8] = {'S','u','l','l','y','_',i+48,'\0'};
char *c = "#include <stdio.h>%c#include <unistd.h>%c#include <stdlib.h>%cint main(){%cint i = %d;%cchar base[10] = {'S','u','l','l','y','_',i+48,'.','c','%c0'}, child[8] = {'S','u','l','l','y','_',i+48,'%c0'};%cchar *c = %c%s%c;%cif (i != 0){%cif (access(%cSully_5.c%c, R_OK) != -1)%c{i--;}%cbase[6] = i+48;%cchild[6] = i+48;%cvoid *fd=fopen(base, %cw%c);%cfprintf(fd,c,10,10,10,10,i,10,92,92,10,34,c,34,10,10,34,34,10,10,10,10,34,34,10,10,10,10,10);%cfclose(fd);%cchar cmd[512]={'g','c','c',' ','-','W','a','l','l',' ','-','W','e','x','t','r','a',' ','-','W','e','r','r','o','r',' ','S','u','l','l','y','_',i+48,'.','c',' ','-','o',' ','S','u','l','l','y','_',i+48,' ',';',' ','.','/','S','u','l','l','y','_',i+48};%csystem(cmd);%c}}";
if (i != 0){
if (access("Sully_5.c", R_OK) != -1)
{i--;}
base[6] = i+48;
child[6] = i+48;
void *fd=fopen(base, "w");
fprintf(fd,c,10,10,10,10,i,10,92,92,10,34,c,34,10,10,34,34,10,10,10,10,34,34,10,10,10,10,10);
fclose(fd);
char cmd[512]={'g','c','c',' ','-','W','a','l','l',' ','-','W','e','x','t','r','a',' ','-','W','e','r','r','o','r',' ','S','u','l','l','y','_',i+48,'.','c',' ','-','o',' ','S','u','l','l','y','_',i+48,' ',';',' ','.','/','S','u','l','l','y','_',i+48};
system(cmd);
}}