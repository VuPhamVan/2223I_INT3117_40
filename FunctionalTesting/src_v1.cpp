#include "iostream"
#include <stdexcept>

using namespace std;

enum PAYMENT_OPTION {
    VtPay, Mono, ZolaPay, C4ke
};

int getPayment(int consumed, int discount, PAYMENT_OPTION paymentOption) {
    int amount = 0;
    if (consumed <= 0) {
        throw std::invalid_argument("Consumed cannot be negative");
    } else if (consumed <= 50) {
        amount = consumed*1678;
    } else if (consumed <= 100) {
        amount = 50*1678 + (consumed-50)*1734;
    } else if (consumed <= 200) {
        amount = 50*1678 + 50*1734 + (consumed-100)*2014;
    } else if (consumed <= 300) {
        amount = 50*1678 + 50*1734 + 100*2014 + (consumed-200)*2536;
    } else if (consumed <= 400) {
        amount = 50*1678 + 50*1734 + 100*2014 + 100*2536 + (consumed-300)*2834;
    } else  {
        amount = 50*1678 + 50*1734 + 100*2014 + 100*2536 + 100*2834 + (consumed-400)*2972;
    }

    if (discount <0) {
        throw std::invalid_argument("Discount cannot be negative");
    } else if (discount < amount) {
        amount -= discount;
    } else {
        amount = 0;
    }
    int d;
    switch (paymentOption) {
        case VtPay:
            return amount*0.97 + 1;
        case Mono:
            return -9999;
        default:
            return amount;
    }

    return 0;
}