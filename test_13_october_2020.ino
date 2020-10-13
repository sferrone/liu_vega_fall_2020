/*
Variable resistor is attached to current-to-voltage converter
WE will test reading data live with python
*/

int read_a0=A0;
int my_voltage_output;

void setup() {
    Serial.begin(9600);
}

void loop() {
    my_voltage_output = analogRead(read_a0)
    Serial.print("my_voltage = ");
    Serial.println(read_a0);

}