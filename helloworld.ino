#define SerialDebug Serial
void setup(){
  SerialDebug.begin(9600);
  SerialDebug.println("Hello world!")
}

void loop(){
}
