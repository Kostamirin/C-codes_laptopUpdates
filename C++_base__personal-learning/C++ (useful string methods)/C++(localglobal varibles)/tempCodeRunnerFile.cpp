#include <iostream>

std::string name = "Kostya"; //Это глобальная переменная и при объявлении локальной переменной в void не будет использоваться

int main(){
    std::string name = "Vlasov"; //Это локальная переменная и при ее выведении будет игнорироваться глобальная
    
    std::cout <<"Hello " <<::name <<name <<'\n';
    return 0;
}

