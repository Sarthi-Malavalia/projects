#include <stdio.h>
#include <string.h>
struct students{
int roll ;
char name[10];
};
void main(){
struct students s;
s.roll=1234;
strcpy (s.name,"ramesh");
printf("roll = %d,name= %s ",s.roll,s.name);
}
