#include<stdio.h>
struct address{
    int id;
    char name[100];
    
} juel, jamil;

int main(){
    juel.id=10;
    gets(juel.name);
    jamil.id=12;
    gets(jamil.name);
  //  juel.name="juel rana";
   // juel.city="chd";
   
   // jamil.name="jamil hossain";
    printf("id1=%d name1=%s \nid2=%d name2:%s ", juel.id, juel.name, jamil.id,jamil.name);
    return 0;
}