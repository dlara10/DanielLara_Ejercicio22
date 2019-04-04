#define _USE_MATH_DEFINES
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include <algorithm> 

using std::cout;
using std::endl;


float apuesta(float x);
void MCM(int inicial, int *x);

int main(){ 
  int i, x, N;
  N = 1000;
  MCM(N, &x);
  cout << x << endl;
  return 0;
    
}

float f(float x){
    return exp(-(x*x)/2);
}

void MCM(int inicial, int *x){
    int i; 
    int step, propuesta, alpha, a, r;
    srand48(time(0));
    i = 0;
    a = (rand()%3)*M_PI;
    r = 0;
    while(i <= inicial){
        step = a + rand()%3-1;
        r = std::min(1, f(step)/f(a));
        alpha = rand();
        if(alpha<r){
            *x = step;
        }else{
            *x = a;
        }
        a += step;
        i++;
    }
    
}

