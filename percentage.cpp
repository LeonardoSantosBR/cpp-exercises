#include <iostream>

int calculatePerc(int tot, int parc){
    return parc * tot / 100 ;
}

int main() {
    //porcentagem
    int tot = 783;
    int parc = 23;

    int percentage = calculatePerc(tot, parc);
    return percentage;
}
