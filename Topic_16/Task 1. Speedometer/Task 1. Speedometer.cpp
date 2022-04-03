#include <iostream>
#include <cstdio>
using namespace std;

bool compare(double value, double ref, double accuracy){
    return (value >= ref - accuracy) && (value <= ref + accuracy);
}

int main() {
    char result[100];
    float speed = 0.0f;
    float inc_speed = 0.0f;
    float speed_value = 0.0f;

    do{
        cout << "Enter how much the speed of the car has increased: \n";
        cin >> inc_speed;
        speed_value += inc_speed;
        if(speed_value < 0 || speed_value > 150){
            cout << "The speed value must be between 0 and 150!\n";
            speed_value -= inc_speed; // Возвращаем знаение переменной speed_value к предыдущему значению
        }else{
            sprintf(result, "Speed: %.1f km/h", speed_value);
            cout << "Current speed value: " << result << endl;
        }

    }while(!compare(speed_value, 0, 0.01));


    return 0;
}
