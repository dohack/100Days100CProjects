#ifndef PASSGEN_H
#define PASSGEN_H

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <time.h>

// Function to generate a password
char* generatePassword(int size, int includeCapital, int includeSpecial, int includeNumbers);

#endif
