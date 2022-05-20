#include <stdio.h>
#include <math.h>
#include "stats.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
const float NaN = 0.0/0.0;
struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    float sum = 0;
    
    if (setlength == 0)
    {
        s.average = NaN;
        s.min = NaN;
        s.max = NaN;
        return s;
    }

    s.average = 0;
    s.min = numberset[0];
    s.max = numberset[0];

    for (int i = 0; i < setlength; i++)
    {
        if (numberset[i] < s.min)
        {
            s.min = numberset[i];   
        }
        
        if (numberset[i] > s.max)
        {
            s.max = numberset[i];   
        }
        
        sum = sum + numberset[i];
    }
    
    s.average = sum / setlength;
    
    return s;
}
