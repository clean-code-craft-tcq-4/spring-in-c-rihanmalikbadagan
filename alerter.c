#include <stdio.h>
#include <math.h>
#include "stats.h"

void check_and_alert(const float maxThreshold, alerter_funcptr alerters[], struct Stats s)
{
    if (s.max > maxThreshold)
    {
        alerters [0];
        alerters [1];
    } 

}

void emailAlerter()
{
    emailAlertCallCount = 1;
}

void ledAlerter()
{
    ledAlertCallCount = 1;
}