#include <dht.h>
#include <LiquidCrystal_I2C.h>
#include <wire.h>
#include <arduino-timer.h>
#include <SoftwareSerial.h>

dht DHT;
auto ledTimer = timer_create_default();
LiquidCrystal_I2C lcd(0x27, 20, 4);

int waterVal = 0;
int temperatureVal = 0;
int humidityVal = 0;
int DHTCheck = 0;
String HC05Data = "";

const int waterPin = A5;
const int buzzerPin = 2;
const int tiltPin = 3;
const int DHTPin = 4;
const int redLEDPin = 5;
const int greenLEDPin = 6;
int tempMax = 70;
int tempMin = 0;
int waterMax = 100;
int waterMin = 000;
int humidityMax = 100;
int humidityMin = 00;
int valChange = 0;
bool isNum =  true;


void setup() {
  Serial.begin(9600);
  pinMode (redLEDPin, OUTPUT);
  pinMode (greenLEDPin, OUTPUT);
  pinMode (buzzerPin, OUTPUT);
  pinMode (tiltPin, INPUT_PULLUP);
  pinMode (12, OUTPUT);
    if (!i2CAddrTest(0x27)) {
    lcd = LiquidCrystal_I2C(0x3F, 20, 4);
  }
  digitalWrite(redLEDPin, LOW);
  digitalWrite(greenLEDPin, LOW);
  digitalWrite(buzzerPin, LOW);
  ledTimer.every(10000, powerLED);
  lcd.init();
  Serial.println("For a list of commands please type 'Help'.");    
}

void loop() {
  waterVal = analogRead(waterPin);
  DHTCheck = DHT.read11(DHTPin);
  temperatureVal = DHT.temperature;
  humidityVal = DHT.humidity;

/*
  Serial.print("Temperature = ");
  Serial.print(DHT.temperature);
  Serial.print(" Water Level = ");
  Serial.print(analogRead(waterPin));
  Serial.print(" Humidity = ");
  Serial.print(DHT.humidity);
  Serial.print("\n");
  ledTimer.tick();
*/
  if ((digitalRead(tiltPin) == HIGH) || ((temperatureVal > tempMax) || (temperatureVal < tempMin)) || ((waterVal > waterMax) || (waterVal < waterMin)) || ((humidityVal > humidityMax) || (humidityVal < humidityMin))){
    errorMode();
  }

  if(Serial.available() > 0){
    HC05Data = Serial.readString();
    HC05Data.trim();
    Serial.println(HC05Data);

    if (HC05Data == "tempMax"){
    valChange = 1;
    Serial.println("Please enter a number to change the maximum temperature.");
    HC05Data = "";
  }
  else if (HC05Data == "tempMin"){
    valChange = 2;
    Serial.println("Please enter a number to change the minimum temperature.");
    HC05Data = "";
  }
  else if (HC05Data == "waterMax"){
    valChange = 3;
    Serial.println("Please enter a number to change the maximum water level.");
    HC05Data = "";
  }
  else if (HC05Data == "waterMin"){
    valChange = 4;
    Serial.println("Please enter a number to change the minimum water level.");
    HC05Data = "";
  }
  else if (HC05Data == "humidityMax"){
    valChange = 5;
    Serial.println("Please enter a number to change the maximum humidity.");
    HC05Data = "";
  }
  else if (HC05Data == "humidityMin"){
    valChange = 6;
    Serial.println("Please enter a number to change the minimum temperature.");
    HC05Data = "";
  }
  else if (HC05Data == "Readout"){
  Serial.print("Temperature = ");
  Serial.print(DHT.temperature);
  Serial.print(" Water Level = ");
  Serial.print(analogRead(waterPin));
  Serial.print(" Humidity = ");
  Serial.print(DHT.humidity);
  Serial.print("\n");
  HC05Data = "";
  }
  else if (HC05Data == "Ranges"){
  Serial.println("The range for temperature is from ");
  Serial.print(tempMin);
  Serial.print(" to ");
  Serial.print(tempMax);
  Serial.println("The range for water level is from ");
  Serial.print(waterMin);
  Serial.print(" to ");
  Serial.print(waterMax);
  Serial.println("The range for humidity level is from ");
  Serial.print(humidityMin);
  Serial.print(" to ");
  Serial.print(humidityMax);
  HC05Data = "";
  }
  else if (HC05Data == "Help"){
    Serial.println("The list of commands is:");
    Serial.println("'tempMax' allows you to set the maximum temperature before alert.");
    Serial.println("'tempMin' allows you to set the minimum temperature before alert.");
    Serial.println("'waterMax' allows you to set the maximum water level before alert.");
    Serial.println("'waterMin' allows you to set the minimum water level before alert.");
    Serial.println("'humidityMax' allows you to set the maximum humidity level before alert.");
    Serial.println("'humidityMin' allows you to set the minimum humidity level before alert.");
    Serial.println("'Readout' displays the current readout of the sensors.");
    Serial.println("'Ranges' displays the current nominal ranges of the sensors.");
    HC05Data = "";
  }
  else{
    isNum =  true;
    for (int i = 0; i<(HC05Data.length()); i++){
      if (isDigit(HC05Data[i])){
        continue;
      }
      else {
        isNum = false;
        HC05Data = "";
        break;
      }
    }
    if (isNum == true){
      if(valChange ==1){
        tempMax = HC05Data.toInt();
        Serial.println("The new value of tempMax is ");
        Serial.print(HC05Data.toInt());
        HC05Data = "";
      }
      else if (valChange == 2){
        tempMin = HC05Data.toInt();
        Serial.println("The new value of tempMin is ");
        Serial.print(HC05Data.toInt());
        HC05Data = "";
      }
      else if (valChange == 3){
        waterMax = HC05Data.toInt();
        Serial.println("The new value of waterMax is ");
        Serial.print(HC05Data.toInt());
        HC05Data = "";
      }
      else if (valChange == 4){
        waterMin = HC05Data.toInt();
        Serial.println("The new value of waterMin is ");
        Serial.print(HC05Data.toInt());
        HC05Data = "";
      }
      else if (valChange == 5){
        humidityMax = HC05Data.toInt();
        Serial.println("The new value of humidityMax is ");
        Serial.print(HC05Data.toInt());
        HC05Data = "";
      }
      else if (valChange == 6){
        humidityMin = HC05Data.toInt();
        Serial.println("The new value of humidityMin is ");
        Serial.print(HC05Data.toInt());
        HC05Data = "";
      }
      else{
        Serial.println("Please first enter a value to change.");
      }
    }
    else{
      Serial.println("Unknown Command.");
      HC05Data = "";
    }
    }
  }  
}

bool i2CAddrTest(uint8_t addr) {
  Wire.begin();
  Wire.beginTransmission(addr);
  if (Wire.endTransmission() == 0) {
    return true;
  }
  return false;
}

bool powerLED(void *) {
  digitalWrite(greenLEDPin, HIGH); // toggle the LED
  delay(100);
  digitalWrite(greenLEDPin, LOW);
  return true; // keep timer active? true
}

void errorMode() {
  digitalWrite(greenLEDPin, LOW); // toggle the LED
  digitalWrite(redLEDPin, HIGH);
  digitalWrite(buzzerPin, LOW);
  lcd.backlight();

  while ((digitalRead(tiltPin) == HIGH) || ((temperatureVal > tempMax) || (temperatureVal < tempMin)) || ((waterVal > waterMax) || (waterVal < waterMin)) || ((humidityVal > humidityMax) || (humidityVal < humidityMin))){
    lcd.setCursor(0,0);
    DHTCheck = DHT.read11(DHTPin);
    temperatureVal = DHT.temperature;
    humidityVal = DHT.humidity;
    waterVal = analogRead(waterPin);

    Serial.print("Temperature = ");
    Serial.print(DHT.temperature);
    Serial.print(" Water Level = ");
    Serial.print(analogRead(waterPin));
    Serial.print(" Humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("\n");
    delay(500);

    lcd.clear();

    //Serial.print()
    if (temperatureVal > tempMax){
      lcd.print("Temp:");
      lcd.print(temperatureVal);
      lcd.print(" Too high!");
    }
    else if (temperatureVal < tempMin){
      lcd.print("Temp:");
      lcd.print(temperatureVal);
      lcd.print(" Too low!");
    }
    else {
      lcd.print("Temp:");
      lcd.print(temperatureVal);
      lcd.print(" Nominal");
    }
    lcd.setCursor(0,1);
    if (waterVal > waterMax){
      lcd.print("Water:");
      lcd.print(waterVal);
      lcd.print(" Too much");
    }
    else if (waterVal < waterMin){
      lcd.print("Water:");
      lcd.print(waterVal);
      lcd.print(" Low!");
    }
    else {
      lcd.print("Water:");
      lcd.print(waterVal);
      lcd.print(" Nominal");
    }
    lcd.setCursor(0,2);
    if (humidityVal > humidityMax){
      lcd.print("Humid:");
      lcd.print(humidityVal);
      lcd.print(" High!");
    }
    else if (humidityVal < humidityMin){
      lcd.print("Humid:");
      lcd.print(humidityVal);
      lcd.print(" Low!");
    }
    else {
      lcd.print("Humid:");
      lcd.print(humidityVal);
      lcd.print(" Nominal");
    }
      //
  }
  lcd.noBacklight();
  digitalWrite(buzzerPin, LOW);
  digitalWrite(redLEDPin, LOW);
  return;
}
