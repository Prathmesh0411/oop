#include<iostream>                  //including header files
using namespace std;               //declaring the scope of program
class complex                     //class name "complex"
{
 public:
 float real,img;          //declared variable of type float
        complex()              //default constructor
{
}
        complex operator+ (complex);
        complex operator* (complex);
        friend ostream &operator<<(ostream &,complex&);
        friend istream &operator<<(istream &,complex&);
};

 complex complex:: operator + (complex obj)
{
 complex temp;
 temp.real=real+obj.real;
 temp.img=img+obj.img;
 return (temp);
}
 istream &operator >> (istream &is,complex &obj)
{
 is>>obj.real;
 is>>obj.img;
 return is;
}
 ostream &operator<<(ostream &outt,complex &obj)
{
 outt<<""<<obj.real;
 outt<<"+"<<obj.img<<"i";
 return outt;
}
 complex complex :: operator * (complex obj)
{
   complex temp;
        temp.real=real*obj.real-img*obj.img;
        temp.img=real*obj.img+img*obj.real;
        return (temp);
}

int main()
{
    int ch;
    char ans;
 complex a,b,c,d;
 do
 {
    cout<<"\n\tArithmetic operations";
     
     cout<<"\n\t1.Addition =";
     cout<<"\n\t2.Multiplication=";
     cout<<"\n Enter your choice: ";
     cin>>ch;
  switch(ch)
 {
       case 1:
  cout<<"\n\tAddition ";
  cout<<"\nEnter first complex number\n";
  cout<<"\nEnter real and imaginary:\t";
 cin>>a;
 cout<<"Enter second complex number \n";
 cout<<"\nEnter real and imaginary:\t";
 cin>>b;
 c=a+b;
  cout<<c;
 break;
    case 2:
 cout<<"\n\tMultiplication";
 cout<<"\nEnter first complex number\n";
  cout<<"\nEnter real and imaginary:\t";
 cin>>a;
 cout<<"Enter second complex number \n";
 cout<<"\nEnter real and imaginary:\t";
 cin>>b;
 d=a*b;
  cout<<d;
 break;
 }
 cout<<endl;
 cout<<"\n DO you want to go to main menu= ";
 cin>>ans;
 }while(ans=='y' || ans=='Y');
 return 0;
}
