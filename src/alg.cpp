// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  if (0==n) {
    return 1;
  }
  if (1==n) {
    return value;
  }
  double result = 1;
  if ( 0!=n && 1!=n ) {
    while(n--) {
      result *= value;
    }
    return result;
  }
}

uint64_t fact(uint16_t n) {
  int result = 1;
  for (int i=1; i<=n; i++) {
    res *= i;
  }
  return res;

}

double calcItem(double x, uint16_t n) {
  return pown(x, n)/fact(n);
}

double expn(double x, uint16_t count) {
  double exp = 1;
  for (int i=1; i<=count; i++) {
    exp += pown(x, i)/fact(i);  
  }
  return exp;
}

double sinn(double x, uint16_t count) {
  double sin=0;
  for (int i=0; i<=count; i++) {
    int p = 2*i-1;
    int o = i-1;
    sin += pown(-1,o) (pown(x, p)/fact(p));
  }
  return sin;
}

double cosn(double x, uint16_t count) {
  double cos=0;
  for (int i=0; i<=count; i++) {
    int p = 2*i-2;
    int o = i-1;
    cos += pown(-1,o) (pown(x, p)/fact(p));
  }
  return cos;
}
