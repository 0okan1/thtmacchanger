#include<stdio.h>
#include<stdlib.h>

//Projex sizleri seviyor THT ailesi.


//İnt değerini saklamak ve kullanmak için.
int tht_int(char* prompt)
{
  printf("%s",prompt);
  int giris;
  scanf("%d",&giris);
  return giris;
}

// float değerini saklamak ve kullanmak için.
float tht_float(char* prompt)
{
  printf("%s",prompt);
  float giris;
  scanf("%f",&giris);
  return giris;
}

// double değerini saklamak ve kullanmak için.
double tht_double(char* prompt)
{
  printf("%s",prompt);
  double giris;
  scanf("%lf",&giris);
  return giris;
}

// Long değerini saklamak ve kullanmak için.
long tht_long(char* prompt)
{
  printf("%s",prompt);
  long giris;
  scanf("%ld",&giris);
  return giris;
}


//long long değerini saklamak ve kullanmak.
long long tht_longlong(char* prompt)
{
  printf("%s",prompt);
  long long giris;
  scanf("%lld", &giris);
  return giris;
}

//String saklama ve kullanmak için.
char* tht_string(char* str)
{
  printf("%s",str);
  char* d = malloc(sizeof(char)*101);
  scanf(" %[^\n]s", d);
  return d;
}
