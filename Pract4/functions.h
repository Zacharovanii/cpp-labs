#pragma once

// 1
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, int exp);
long long factorial(int n);

int my_bit_and(int a, int b);
int my_bit_or(int a, int b);
int my_bit_xor(int a, int b);
int my_bit_not(int a);

// 2
double sumArray(int arr[], int size);
void checkCalories(int plan[], int actual[], int planSize, int actualSize);

// 3
double sumArray(double arr[], int size);
double averageArray(double arr[], int size);
void payrollAnalysis(double fixed[], int fixedSize, double hourly[], int hourlySize);

// 4
double maxArray(double arr[], int size);
double minArray(double arr[], int size);
int countBelowZero(double arr[], int size);
void temperatureAnalysis(double lastYear[], int lastSize, double thisYear[], int thisSize);

// 5
void financeAnalysis(double income, double fixed[], int fixedSize, double unplanned[], int unplannedSize);
