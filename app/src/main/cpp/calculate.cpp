//
// Created by Wonyoung on 10/11/2018.
//

#include "calculate.h"

int i = 0;

int calculate::incrementByOne() {
    return i+=1;
}

void calculate::resetNumber() {
    i = 0;
}

int calculate::currentNumber() {
    return i;
}
