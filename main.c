//
//  main.c
//  Strings
//
//  Created by Eun Jae Lee on 29/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//
//  Strings: arrays of character.
//  char ch[6] = "Hello";
//  char ch = 'a';
//  char ch[6] = {'H','E','L','L','O','\o'}; // last character is null
//  char ch[] = "Hello";
//  print -> %c,ch[2]   %s,ch

#include <stdio.h>

int main(int argc, const char * argv[]) {

    char name[10];
    printf("Enter your name: \n");
    scanf("%s",name);
    
    printf("Hi, %s\n", name);
}
