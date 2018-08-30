#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int Any_Number;
   cout <<"FINDING OUT WHETHER OR NOT A NUMBER IS PRIME"<<endl;

   cout <<"PLEASE ENTER ANY NUMBER"<<endl;

   cin>>Any_Number;
   int a=Any_Number;

  if (a==2)
  {
      cout <<" IT IS A PRIME NUMBER"<<endl;
  }
  else if (a==3||a==5||a==7)
  {
      cout <<"IT IS A PRIME NUMBER"<<endl;
  }
  else if (a%2==0)
  {
      cout <<"IT IS NOT A PRIME NUMBER"<<endl;
  }
  else if (a%5==0)
  {
      cout <<"IT IS NOT A PRIME NUMBER"<<endl;
  }
  else if (a%7==0)
  {
      cout <<"IT IS NOT A PRIME NUMBER"<<endl;
  }
  else if (a%3 == 2 || a%3 == 1)
  {
      cout <<"IT IS A PRIME NUMBER"<<endl;
  }
  else
  {
    cout <<"IT IS NOT A PRIME NUMBER"<<endl;
  }
return 0;

}
