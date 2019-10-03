#include<iostream.h>
#include<conio.h>
void fun_i(char,int);
int main()
{
int nin;
char chin;
cout<<"enter the value of chin and nin";
cin>>nin>>chin;
fun_i(chin,nin);
cout<<"data type \t range";
cout<<"int \t -32767 to 32768";
cout<<"char \t 127 to -128";
fun_i(chin,nin);
}
//////////////////////////////////
void fun_i(char a,int b)
{
for (int i=0;i<b;i++)
{
cout<<a;
}
}

