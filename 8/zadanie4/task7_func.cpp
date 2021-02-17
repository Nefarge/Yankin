#pragma once

#include <iostream>
#include "func.h"
using namespace std;

void f1(void);
double x, result;

void f1(void)
{
    result = (1 + sin(2 * x)) / cos(2 * x);
}