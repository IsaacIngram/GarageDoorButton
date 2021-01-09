#include <SPI.h>
#include <WiFiNINA.h>
char ssid[] = "Ingram";
char password[] = "Ingram$$0505$$Ingram";
int status = WL_IDLE_STATUS;

int httpPort = 80;
String httpMethod = "GET";
char hostName[] = "raspberrypi.local";
String pathName = "";

WiFiClient client;

void setup() {
  Serial.begin(9600);

  // Make sure the Wifi module is working
  if(WiFi.status() == WL_NO_MODULE) {
    Serial.println("Issue with WiFi module");
  }

  // Try to connect to the Wifi network
  while(status != WL_CONNECTED) {
    Serial.print("Attempting to connect to network '");
    Serial.print(ssid);
    Serial.println("'");
    status = WiFi.begin(ssid, password);
    delay(5000);
  }

  // Print out that we successfully connected
  Serial.print("Successfully connected to network '");
  Serial.print(ssid);
  Serial.println("'");

  // Print out the IP address of our Arduino
  IPAddress ip = WiFi.localIP();
  Serial.print("IP address: ");
  Serial.println(ip);

//  if(client.connect(hostName, httpPort)) {
//    Serial.println("Connected to server");
//  } else {
//    Serial.println("Connection to server failed");
//  }

}

void loop() {
  // put your main code here, to run repeatedly:
  
}
