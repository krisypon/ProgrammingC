/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: user
 *
 * Created on November 19, 2018, 6:59 PM
 * Presentation C3
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    //C Program to find size og int, float, double and char of your system   
    printf("Size of int is %ld bytes\n", sizeof(int));
    printf("Size of float is %ld bytes\n", sizeof(float));
    printf("Size of double is %ld bytes\n", sizeof(double));
    printf("Size of char is %ld bytes\n", sizeof(char));    
    
    //C Program to demonstrate the working of keyword long
    printf("Size of long is %ld bytes\n", sizeof(long));
    printf("Size of long long is %ld bytes\n", sizeof(long long));   
    printf("Size of long double is %ld bytes\n", sizeof(long double));
    
    //C Program to add two Integers
    int a, b, c;
    c = 66;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    printf("Numbers:%d, %d & %d\n",a,b,c);
    
    //C Program to multiply two floating point numbers
    double x, y, z;
    printf("Enter two numbers:\n");
    scanf("%lf%lf",&x,&y);
    z=x*y;
    printf("z = %.2lf\n", z);
    
    //C Program to compute quotient and remainder(celaja chast i ostatok)
    int dividend, divisor, quotient, remainder;
    printf("Enter dividend & divisor:\n");
    scanf("%d%d", &dividend, &divisor);
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    printf("Quotient = %d\nRemainder = %d\n", quotient, remainder);
    
    //C Program to find ASCII value of character entered by user
    char ch;
    printf("Enter a character:\n");
    scanf("%c", &ch);
    printf("ASCII value of %c = %d\n", ch,ch);
    
    //C Program to print an integer entered by user
    int w;
    printf("Enter number:\n");
    scanf("%d",&w);
    printf("Your number is %d\n",w);
    
    //C Program to swap two numbers entered by user
    int t;
    printf("First is %d \nSecond is %d\n",a,b);
    t=a;
    a=b;
    b=t;
    printf("Now\nFirst is %d\nSecond is %d\n",a,b);
    
    return 0;
}

