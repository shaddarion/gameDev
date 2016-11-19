

#include <iostream>


class MyClass
{
public:
    static void PrintSmth(
        const std::string & _Str
      );

};

void MyClass::PrintSmth(
    const std::string & _Str
  )
{
  std::cout<<"Out: "<<_Str<<'\n';
}
    

int main(int argc, const char * argv[]) {
    
    MyClass::PrintSmth("Highway to hell c++");
    
    return 0;
}
