#include <cstring>

class MyString{
char *str;
unsigned int len; // len >= 0
public:
//default constructor 
MyString(): str(NULL), len(0) //initializer list
{}
MyString(char *s); //ctor with one argument
};

//ctor with one argument
MyString::MyString(char *s){
  if(s == NULL){
    str=new char[1];
    str[0]='\0';
  }
  len=strlen(s);
  str=new char[len+1];
  strcpy(str, s);
  str[len]='\0';
}
int main(){
  MyString s1("Hello");
  return 0;
}
