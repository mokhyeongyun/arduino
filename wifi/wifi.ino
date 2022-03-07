#include <ESP8266WiFi.h>

void setup()
{
  
  Serial.begin(9600); //시리얼 통신
  Serial.println(); 
  

  WiFi.begin("human", "0312395855"); // WiFi에 접속 시작
  
  
  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED) // 와이파이 접속하는동안 . 출력
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println(); 

  

  Serial.print("Connected, IP address: ");
  Serial.println(WiFi.localIP()); // 접속된 와이파이 주소 출력
}

void loop() {
  delay(200); //연결 후 200밀리초당 한번씩
  Serial.print("와이파이 연결!"); // 시리얼 로그 "와이파이 연결" 출력
  }
