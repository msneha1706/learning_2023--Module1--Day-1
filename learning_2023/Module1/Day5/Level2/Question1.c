#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char sensorID[3];
    float temperature;
    int humidity;
    int lightIntensity;
} SensorData;

void parseData(const char* data, SensorData* sensorArray) {
    // Tokenize the data using strtok
    char* token = strtok(data, "-:");

    // Iterate over the tokens and populate the sensor array
    int i = 0;
    while (token != NULL) {
        strcpy(sensorArray[i].sensorID, token);
        token = strtok(NULL, "-:");

        if (token != NULL) {
            if (strcmp(token, "T") == 0) {
                token = strtok(NULL, "-:");
                sensorArray[i].temperature = atof(token);
            } else if (strcmp(token, "H") == 0) {
                token = strtok(NULL, "-:");
                sensorArray[i].humidity = atoi(token);
            } else if (strcmp(token, "L") == 0) {
                token = strtok(NULL, "-:");
                sensorArray[i].lightIntensity = atoi(token);
            }
        }

        token = strtok(NULL, "-:");
        i++;
    }
}

int main() {
    const char* data = "S1-T:36.5-H:100-L:50";
    SensorData sensorArray[3];
	int i=0;
    parseData(data, sensorArray);

    printf("Sensor Info:\n");
    printf("---------------------\n");
    for ( i = 0; i < 3; i++) {
        printf("Sensor ID: %s\n", sensorArray[i].sensorID);
        printf("Temperature: %.1f C\n", sensorArray[i].temperature);
        printf("Humidity: %d\n", sensorArray[i].humidity);
        printf("Light Intensity: %d%%\n", sensorArray[i].lightIntensity);
        printf("---------------------\n");
    }

    return 0;
}

