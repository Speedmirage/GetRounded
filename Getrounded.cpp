#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


void getrounded(void);


int main(int argc, char const *argv[])
{
  getrounded();

  return 0;
}

void getrounded(void)
{

  float x, y;
  int i,s;

  std::cout << "Please enter the number of values you wish to get rounded" <<endl;
  std::cin >> s;


  while (i++<=s) {
    std::cout << " " <<endl;
    std::cout << "Input a decimal value" << std::endl;
    std::cin >> x;
    y=floor(x+0.5);
    std::cout << " " <<endl;
    std::cout<<"The decimal inputed was "<<x<<" making"<<" it's rounded value is "<<fixed<<setprecision(1)<<y<<endl;
  }

}
