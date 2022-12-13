#include "DHT.h"
#define DHTPIN D5
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup(){
Serial.begin(115200);
dht.begin();
Serial.begin(115200);
if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
Serial.println("SSD1306 allocation failed");
for(;;);
}
}
void loop() {
float h = dht.readHumidity();
float t = dht.readTemperature();
Serial.print("Humidity: ");
Serial.print(h);
Serial.println("%");
Serial.print("Temperature: ");
Serial.println(t);
delay(2000);
display.clearDisplay();
display.setTextSize(1);
display.setTextColor(WHITE);
display.setCursor(0,20);
display.println("GUNTREE");
display.println(h);
display.println(t);
display.display();
}
