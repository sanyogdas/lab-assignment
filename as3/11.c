/* Using if-else decision making, write a program in C that displays the recommended
   actions depending on the color of a traffic light. */

#include <stdio.h>

int main() {
    char trafficLight;
    
    printf("Enter the color of the traffic light (R for Red, Y for Yellow, G for Green): ");
    scanf(" %c", &trafficLight);

    if (trafficLight == 'R' || trafficLight == 'r') {
        printf("Stop! The light is Red.\n");
    } else if (trafficLight == 'Y' || trafficLight == 'y') {
        printf("Caution! The light is Yellow. Prepare to stop.\n");
    } else if (trafficLight == 'G' || trafficLight == 'g') {
        printf("Go! The light is Green.\n");
    } else {
        printf("Invalid input! Please enter R, Y, or G.\n");
    }

    return 0;
}