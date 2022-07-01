#include<iostream.h>
class Example
{
public:
void read()
{
cout<<"hello"<<endl;
}
};
class number:public Example
{
public:
void get()
{
cout<<"welcome";
}
};
int main()
{
number a1;
a1.read();
a1.get();
return 0;
}
