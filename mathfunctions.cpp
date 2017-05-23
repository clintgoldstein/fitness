#include "mathfunctions.h"
#include <iostream>


mathfunctions::mathfunctions()
{

}

double mathfunctions::totalHeight(int hghtFeet, double hghtInches){
    double hght = (hghtFeet*12)+hghtInches;
    return hght;
}

double mathfunctions::bmiCalculation(double weight, double hght)
{

    double bmiResult = (weight/(hght*hght))*703;
    return bmiResult;

}

double mathfunctions::bmrCalculation(double weight, double hght, int age, char gender)
{
    double bmrResult;
    if (gender == 'm')
    {
        bmrResult = 88.3 + (13.4 * weight/2.2) + (4.8 * hght/0.39) - (5.7 * age);
     }

    if (gender == 'f')
    {
        bmrResult = 447.6 + (9.2 * weight/2.2) + (3.1 * hght/0.39) - (4.3 * age);
    }
    return bmrResult;
}
double mathfunctions::amrCalculation(double bmrResult, int activityLevel)
{
    double amrResult;

     switch(activityLevel)
     {
        case 1:
        {
            amrResult = (bmrResult * 1.2);
            break;
        }
        case 2:
        {
            amrResult = (bmrResult * 1.375);
            break;
        }
            case 3:
        {
            amrResult = (bmrResult * 1.55);
            break;
        }
            case 4:
        {
            amrResult = (bmrResult * 1.475);
            break;
        }
            case 5:
        {
            amrResult = (bmrResult * 1.9);
            break;
        }
     }
     return amrResult;
}
