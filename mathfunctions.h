#ifndef MATHFUNCTIONS_H
#define MATHFUNCTIONS_H

class mathfunctions
{
public:
    mathfunctions();
    static double totalHeight(int hghtFeet, double hghtInches);
    static double bmiCalculation(double weight, double hght);
    static double bmrCalculation(double weight, double hght, int age, char gender);
    static double amrCalculation(double bmrResult, int activityLevel);

};

#endif // MATHFUNCTIONS_H
