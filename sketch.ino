#include <WiFi.h>
#include <PubSubClient.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";

const char* mqtt_server = "broker.hivemq.com";

WiFiClient espClient;
PubSubClient client(espClient);

void reconnect() {
  while (!client.connected()) {
    if (client.connect("ESP32Monitor")) {
      Serial.println("Conectado ao MQTT");
    } else {
      delay(2000);
    }
  }
}

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }

  client.setServer(mqtt_server, 1883);
}

void loop() {

  if (!client.connected()) {
    reconnect();
  }

  client.loop();

  client.publish(
    "mackenzie/planta/umidade",
    "45"
  );

  Serial.println("Mensagem enviada!");

  delay(5000);
}
