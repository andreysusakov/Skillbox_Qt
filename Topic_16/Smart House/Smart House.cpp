#include <iostream>
#include <string>
#include <sstream>
using namespace std;

enum switches{
    LIGHTS_INSIDE = 1,
    LIGHTS_OUTSIDE = 2,
    HEATERS = 4,
    WATER_PIPE_HEATING = 8,
    CONDITIONER = 16
};

int main() {
    int time = 0;
    int n = 0;
    int outside_temp = 0;
    int inside_temp = 0;
    bool motion = false;
    bool light_house = false;
    int light_temp_1 = 5000;
    int light_temp_2 = 2700;
    int light_temp = 0;
    int switches_state = 0;
    string condition;

    do{
        cout << "State of sensors at " << time << " o'clock " << endl;
        getline(cin, condition);
        stringstream condition_stream (condition);
        condition_stream >> outside_temp >> inside_temp >> light_house >> motion;

        if (time == 24){
            n++;
            time = 0;
            light_temp = light_temp_1;
            cout << "light_temp = " << light_temp << endl;
        }
        if (!(switches_state & LIGHTS_OUTSIDE) && (time < 5 || time > 16) && motion){
            switches_state |= LIGHTS_OUTSIDE;
            cout << "LIGHTS_OUTSIDE - switched on; motion - yes\n";
        }else if ((switches_state & LIGHTS_OUTSIDE) && ((time >= 5 && time <= 16) || !motion)){
            switches_state &= ~LIGHTS_OUTSIDE;
            cout << "LIGHTS_OUTSIDE - switched off; motion - no\n";
        }
        if (!(switches_state & WATER_PIPE_HEATING) && outside_temp < 0){
            switches_state |= WATER_PIPE_HEATING;
            cout << "WATER_PIPE_HEATING - switched on\n";
        }else if ((switches_state & WATER_PIPE_HEATING) && outside_temp > 5){
            switches_state &= ~WATER_PIPE_HEATING;
            cout << "WATER_PIPE_HEATING - switched off\n";
        }
        if (!(switches_state & HEATERS) && inside_temp < 22){
            switches_state |= HEATERS;
            cout << "HEATERS - switched on\n";
        }else if((switches_state & HEATERS) && inside_temp > 25){
            switches_state &= ~HEATERS;
            cout << "HEATERS - switched off\n";
        }
        if (!(switches_state & CONDITIONER) && inside_temp >= 30){
            switches_state |= CONDITIONER;
            cout << "CONDITIONER - switched on\n";
        }else if ((switches_state & CONDITIONER) && inside_temp <= 25){
            switches_state &= ~CONDITIONER;
            cout << "CONDITIONER - switched off\n";
        }
        if (!(switches_state & LIGHTS_INSIDE) && light_house){
            switches_state |= LIGHTS_INSIDE;
            cout << "LIGHTS_INSIDE -switched on\n";
        }else if ((switches_state & LIGHTS_INSIDE) && !light_house){
            switches_state &= ~LIGHTS_INSIDE;
            cout << "LIGHTS_INSIDE -switched off\n";
        }
        if (light_house && time == 16){
            light_temp = light_temp_1;
            cout << "light_temp = " << light_temp << endl;
        }else if (light_house && time > 16 && time <= 20){
            light_temp = light_temp_1 - (light_temp_1 - light_temp_2) / 4 * (time - 16); //температура света на данный час
            cout << "light_temp = " << light_temp << endl;
        }
        time++;

    } while (n != 2);

    return 0;
}
