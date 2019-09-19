#include <stdio.h>
#include "header.h"

int main() {
    FILE *input = NULL;
    FILE *output = NULL;

    int id1,id2,id3,id4,id5;
    int class1,class2,class3,class4,class5;

    double gpa1,gpa2,gpa3,gpa4,gpa5;
    double age1,age2,age3,age4,age5;

    double gpamean,classmean,agemean,gpadeviation,gpamin,gpamax,variance;

    output = fopen("C:\\Users\\Jordan\\CLionProjects\\PA3\\output.txt","w");
    input = fopen("C:\\Users\\Jordan\\CLionProjects\\PA3\\input.txt","r");

    id1 = read_integer(input);
    gpa1 = read_double(input);
    class1 = read_integer(input);
    age1 = read_double(input);

    id2 = read_integer(input);
    gpa2 = read_double(input);
    class2 = read_integer(input);
    age2 = read_double(input);

    id3 = read_integer(input);
    gpa3 = read_double(input);
    class3 = read_integer(input);
    age3 = read_double(input);

    id4 = read_integer(input);
    gpa4 = read_double(input);
    class4 = read_integer(input);
    age4 = read_double(input);

    id5 = read_integer(input);
    gpa5 = read_double(input);
    class5 = read_integer(input);
    age5 = read_double(input);


    fclose(input);

    gpamean = calculate_mean(gpa1 + gpa2 + gpa3 + gpa4 + gpa5,5);
    classmean = calculate_mean(class1 + class2 + class3 + class4 + class5, 5);
    agemean = calculate_mean(age1 + age2 + age3 + age4 + age5,5);
    gpamax = find_max(gpa1,gpa2,gpa3,gpa4,gpa5);
    gpamin = find_min(gpa1,gpa2,gpa3,gpa4,gpa5);
    variance = calculate_variance(calculate_deviation(gpa1,gpamean),
                                  calculate_deviation(gpa2,gpamean),
                                  calculate_deviation(gpa3,gpamean),
                                  calculate_deviation(gpa4,gpamean),
                                  calculate_deviation(gpa5,gpamean),5);
    gpadeviation = calculate_standard_deviation(variance);

    print_double(output,gpamean);
    print_double(output,classmean);
    print_double(output,agemean);
    fprintf(output,"\n");
    print_double(output,gpadeviation);
    print_double(output,gpamin);
    print_double(output,gpamax);
    fclose(output);

    return 0;
}