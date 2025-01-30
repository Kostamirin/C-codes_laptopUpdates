// Created by kley-muner on 1/29/25.
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include "helper.cpp"

int main(){
    something something;
    int number;
    std::cin >>number;
    //int answer = 6;
    // Можно будет создать другие вариации потом
    if (number <=0){std::cout <<"Error"; return 0;}
    std::vector<int> answer;
    for (int i = 0; i <= number; i++)
    {
        std::vector<int> base = something.base(i);
        answer = something.change(answer, base);
    }
    int one=0; int two=0; int three=0; int four=0; int five=0;
    int six=0; int seven=0; int eight=0; int nine=0; int zero=0;
    for (int i = 0; i < answer.size(); i++)
    {
        switch (i)
        {
            case 0: one = answer[i]; break;
            case 1: two = answer[i]; break;
            case 2: three = answer[i]; break;
            case 3: four = answer[i]; break;
            case 4: five = answer[i]; break;
            case 5: six = answer[i]; break;
            case 6: seven = answer[i]; break;
            case 7: eight = answer[i]; break;
            case 8: nine = answer[i]; break;
            case 9: zero = answer[i]; break;
            default: break;
        }
    }

    std::cout <<"One's -- " <<one <<std::endl;
    std::cout <<"Two's -- " <<two <<std:: endl;
    std::cout <<"Three's -- " <<three <<std::endl;
    std::cout <<"Four's -- " <<four <<std::endl;
    std::cout <<"Five's -- " <<five <<std::endl;
    std::cout <<"Six's -- " <<six <<std::endl;
    std::cout <<"Seven's -- " <<seven <<std::endl;
    std::cout <<"Eight's -- " <<eight <<std::endl;
    std::cout <<"Nine's -- " <<nine <<std::endl;
    std::cout <<"Zero's -- " <<zero <<std::endl;

    return 0;
}
