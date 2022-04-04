//NIDHI SHAH SET 2 QUESTION 2
#include <iostream>
#include <string>
using namespace std;

class charInput
{
public:
	virtual void add(char c)
	 {
	  data += c;
	 }
	std::string getValue() { return data; }
	std::string data;
};

class numInput : public charInput
{
   void add(char c)
   {
      if (('0' <= 'c') && (c <= '9'))
         charInput::add(c);
   }
};

int main()
{
    charInput* input = new numInput();
    input->add('1');
    input->add('a');
    input->add('0');
    std::cout << input->getValue()<<endl;
}

