
#define CLK_PIN 13
#define CS_PIN 12
#define DIN_PIN 11
#define TOTAL_MATRIX 4

int shutdownSequence[2] = {15,0};
int startUpSequence[2] = {15,1};

void initialSetup(void);
void shutdownMode(void);
void displayTest(void);


void setup() {
  // put your setup code here, to run once:
  pinMode(CLK_PIN,OUTPUT);
  pinMode(CS_PIN,OUTPUT);
  pinMode(DIN_PIN, OUTPUT);
  initialSetup();
  
}

void loop() {
  
}

void initialSetup(void){

  for(int shiftRegister = 0; shiftRegister < TOTAL_MATRIX; shiftRegister++){
    shutdownMode();
    delay(1000);
  }
  for(int shiftRegister = 0; shiftRegister < TOTAL_MATRIX; shiftRegister++){
    displayTest();
    delay(1000);
  }
 
}

void shutdownMode(void){
  digitalWrite(CS_PIN, LOW);
  shiftOut(DIN_PIN, CLK_PIN, MSBFIRST, shutdownSequence[0]);
  shiftOut(DIN_PIN, CLK_PIN, MSBFIRST, shutdownSequence[1]);
  digitalWrite(CS_PIN,HIGH);
}

void displayTest(void){
  digitalWrite(CS_PIN,LOW);
  shiftOut(DIN_PIN, CLK_PIN, MSBFIRST, startUpSequence[0]);
  shiftOut(DIN_PIN, CLK_PIN, MSBFIRST, startUpSequence[1]);
  digitalWrite(CS_PIN,HIGH);
}
