#include "bmi.h"

typedef struct 
{
  uint8_t Age;
  uint8_t Height;
  uint8_t Weight;

} userData;

typedef struct 
{
   char underWeight;
   char normal;
   char overweight;
   char obesity;
} bodyType;

typedef struct
{

uint8_t SevereThinness;	             //< 16
uint8_t ModerateThinness;	         //16 - 17
uint8_t MildThinness;	             //17 - 18.5
uint8_t Normal;	                     //18.5 - 25
uint8_t Overweight;	                 //25 - 30
uint8_t ObeseClassI;	                 //30 - 35
uint8_t ObeseClassII;	             //35 - 40
uint8_t ObeseClassIII;	             //> 40

}obesityType;