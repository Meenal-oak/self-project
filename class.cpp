#include<iostream>
using namespace std;

class student{
  public:
  int age;
  int roll_num;
  string name;
};
int main(){

  student s1;
  s1.age = 19;
  s1.name="meenal";
  s1.roll_num = 223;
  cout << s1.name<<" "<<s1.age <<" "<<s1.roll_num;

  return 0;
}