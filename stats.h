struct Stats
{
    int average;
    int min;
    int max;
};

struct Stats compute_statistics(const float* numberset, int setlength);

typedef void (*alerter_funcptr)(int);
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
void emailAlerter(int status);
void ledAlerter(int status);

extern int emailAlertCallCount;
extern int ledAlertCallCount;
