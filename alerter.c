#include <stdio.h>
#include <math.h>
#include "stats.h"

void check_and_alert(const float maxThreshold, alerter_funcptr alerters[], struct Stats s)
{
    int status = FALSE;
    if (s.max > maxThreshold)
    {
        status = TRUE;
    } else
    {
        status = FALSE;
    }
    alerters [0] = emailAlerter(status);
    alerters [1] = ledAlerter(status);
}

void *emailAlerter(int status)
{
    if (status == TRUE)
    {
        emailAlertCallCount = 1;
    }
}

void *ledAlerter(int status)
{
    if (status == TRUE)
    {
        ledAlertCallCount = 1;
    }
}