#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    int sum = 0;
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

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
