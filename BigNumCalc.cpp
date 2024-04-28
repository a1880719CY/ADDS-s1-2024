#include "bigNumCalc.h"
#include <algorithm>

std::list<int> bigNumCalc::buildBigNum(std::string numString) {
    std::list<int> bigNum;
    for (char digit : numString) {
        bigNum.push_back(digit - '0');
    }
    return bigNum;
}

std::list<int> bigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    int carry = 0;

    while (!num1.empty() || !num2.empty() || carry) {
        int sum = carry;
        if (!num1.empty()) {
            sum += num1.back();
            num1.pop_back();
        }
        if (!num2.empty()) {
            sum += num2.back();
            num2.pop_back();
        }
        result.push_front(sum % 10);
        carry = sum / 10;
    }

    return result;
}

std::list<int> bigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    int borrow = 0;

    while (!num1.empty() || !num2.empty()) {
        int sub = borrow;
        if (!num1.empty()) {
            sub += num1.back();
            num1.pop_back();
        }
        if (!num2.empty()) {
            sub -= num2.back();
            num2.pop_back();
        }
        if (sub < 0) {
            sub += 10;
            borrow = -1;
        } else {
            borrow = 0;
        }
        result.push_front(sub);
    }

    while (result.front() == 0 && result.size() > 1) {
        result.pop_front();
    }

    return result;
}

std::list<int> bigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
    int multiplier = num2.front();
    num2.pop_front();
    std::list<int> result = num1;
    int carry = 0;
    
    for (auto it = result.rbegin(); it != result.rend(); ++it) {
        int product = *it * multiplier + carry;
        *it = product % 10;
        carry = product / 10;
    }
