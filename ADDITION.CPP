//Name:AMAN PRAJAPATI
//PRN:23070123017
//Aim:Implemention of Function and Operator Overloading to perform Addition using Function Overloading

#include <iostream>
using namespace std;

class Addition{
    public:
   int sum(int a,int b)
   {
       return a+b;
   }
   int sum(int a,int b,int c)
   {
       return a+b+c;
   }
   double sum(double d,double e)
   {
       return d+e;
   }
};
int main(){
    Addition obj;
    cout<<obj.sum(20, 15)<<endl;
    cout<<obj.sum(81, 100, 10)<<endl;
    cout<<obj.sum(20.5, 30.5);
    
    return 0;
}


/*Output:
35
191
51
*/