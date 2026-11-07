/* Q132: Traffic light enumeration. */
#include <stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main(void)
{
    const char *names[] = {"RED", "YELLOW", "GREEN"};
    const char *actions[] = {"Stop", "Wait", "Go"};
    for (enum TrafficLight light = RED; light <= GREEN; light++)
        printf("%s: %s\n", names[light], actions[light]);
    return 0;
}
