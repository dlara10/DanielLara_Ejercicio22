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
  int i, N, y;
  N = 1000;
  int x[N];
  for ( int i = 0; i < N; i++ ) {
      MCM(N, &y);
      cout << x[i] << endl;
   }
  return 0;
    
}

float f(float x){
    return exp(-(x*x)/2);
}

void MCM(int inicial, int *x){
    int i; 
    int step, propuesta, alpha, a, r, n;
    int  h[inicial];
    srand48(time(0));
    i = 0;
    a = (rand()%3)*M_PI;
    r = 0;
    while(i <= inicial){
        step = a + rand()%3-1;
        if(1< f(step)/f(a) ){
            r = 1;
        }else{
            r = f(step)/f(a);
        }
        alpha = rand();
        if(alpha<r){
            h[i] = step;
        }else{
            h[i] = a;
        }
        a += step;
        i++;
    }
    *x = r;
}

