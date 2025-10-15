
#include <iostream>
using namespace std;
int main() 
{
    int a,b,c,largest;
    cout<<"Enter 3 numbers to be compared:"<<endl;
    cin>>a>>b>>c;
 if(a==b && b==c)
       cout << "All numbers are equal"<<endl;
  {
      if (a>=b && a>=c)
 largest = a;
  else if (b>=a && b>=c)
 largest = b;
  else
largest = c;
    int smallest;
  if(a<=b && a<=c)
 smallest = a;
 else if(b<=a && b<=c)
 smallest = b;
 else
 smallest = c;
 cout << "Largest number: " << largest << endl;
        cout << "Smallest number: " << smallest << endl;
        cout << "All numbers are not equal."<<endl;
  }
    return 0;
}
