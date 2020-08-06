#include<stdio.h>
#include<string.h>
int main(){
char name[10]="Deepa";
char key[10]="First";
int number=10;
int id=1;
char json[100];
snprintf(json,sizeof (json),"{\"%s\": {\"name\":\"%s\",\"number\":%d,\"id\":%d}}",key,name,number,id);
printf("%s\n",json);
}
