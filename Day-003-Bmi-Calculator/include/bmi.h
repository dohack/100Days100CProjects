#ifndef BMI_H
#define BMI_H

#include <stdint.h>

// Define structs for data representation
typedef struct {
    uint8_t Age;
    uint8_t Height;
    uint8_t Weight;
    float BMI;
    char Classification;
} userData;

typedef struct {
    uint8_t SevereThinness;     //< 16
    uint8_t ModerateThinness;   //16 - 17
    uint8_t MildThinness;       //17 - 18.5
    uint8_t Normal;             //18.5 - 25
    uint8_t Overweight;         //25 - 30
    uint8_t ObeseClassI;        //30 - 35
    uint8_t ObeseClassII;       //35 - 40
    uint8_t ObeseClassIII;      //> 40
    char underWeight;
    char normal;
    char overweight;
    char obesity;
} obesityType;

// Function prototypes
void calculateBMI(userData *user);
void determineClassification(userData *user, obesityType *obesity);
void displayResults(userData *user);

#endif /* BMI_H */
