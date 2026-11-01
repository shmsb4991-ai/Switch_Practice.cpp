#include <iostream>
using namespace std;
int main()
{
  int choice;
  cout <<"Enter Your Choice: \n";
  cin >> choice;
  switch (choice) 
  {
    case 1:
    cout <<"You are doing a great job don't give up to achieve your dreams! \n";
    break;
    case 2:
    cout <<"Your project on Github is Great keep going!\n";
    break;
    case 3:
    cout <<"Goodbye! See You Next Time!\n";
    break;
    default:
    cout <<"Invalid Choice!" <<endl;
    break;
  }
  return 0;
}
