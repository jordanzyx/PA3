//
// Created by Jordan on 9/18/2019.
//
#include <stdio.h>
#include <math.h>
#include "header.h"
#define _CRT_SECURE_NO_WARNINGS

double read_double(FILE *infile){
    double val;
    fscanf(infile,"%lf",&val);
    return val;
}
int read_integer(FILE *infile){
    int val = 0;
    fscanf(infile,"%d", &val);
    return val;
}
double calculate_sum(double number1,double number2,double number3,double number4,double number5){
    return number1 + number2 + number3 + number4 + number5;
}
double calculate_mean(double sum, int number){
    double val = sum / number;
    return val == 0 ? -1 : val;
}
double calculate_deviation(double number, double mean){
    return number - mean;
}
double calculate_variance(double deviation1, double deviation2, double deviation3, double deviation4,double deviation5,int number){
    return  ((deviation1 * deviation1) + (deviation2 * deviation2) + (deviation3 * deviation3) + (deviation4 * deviation4) + (deviation5 * deviation5)) / number ;
}

double calculate_standard_deviation(double variance){
    return sqrt(variance);
}

double find_max(double number1, double number2,double number3,double number4,double number5){
    double *largest = &number1;
    if(*largest < number2) largest = &number2;
    if(*largest < number3) largest = &number3;
    if(*largest < number4) largest = &number4;
    if(*largest < number5) largest = &number5;
    return *largest;
}

double find_min(double number1, double number2,double number3,double number4,double number5){
    double *largest = &number1;
    if(*largest > number2) largest = &number2;
    if(*largest > number3) largest = &number3;
    if(*largest > number4) largest = &number4;
    if(*largest > number5) largest = &number5;
    return *largest;
}

void print_double(FILE *outfile, double number){
    fprintf(outfile,"%.2lf\n",number);
}

