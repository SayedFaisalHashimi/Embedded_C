#include <stdio.h>
#include <stdint.h> 

int main() { 
    // uint8_t is 1 byte (0 to 255)
    uint8_t sensor_value = 255;  
    
    // int32_t is 4 bytes (-2,147,483,648 to 2,147,483,647)
    int32_t temperature = -10;   
    
    printf("Sensor: %u, Temp: %d\n", sensor_value, temperature); 
    
    return 0; 
}
