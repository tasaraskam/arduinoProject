  //ekxwroume stis metavlhtes tis times twn thyrwn.
  int PhotoResistorPin = A0;
  int ledPin = 13;
  int lightInt;
void setup() {
  // put your setup code here, to run once:
  //anoigma seiriakis epikoinwnias gia na vlepoume sto pc tis trexouses times tou aisthitira flogas.
  Serial.begin(9600);
  //orismos tis thyras BuzzerPin(10) ws thyra eksodou.
  pinMode(BuzzerPin,OUTPUT);  
void loop() {
  // put your main code here, to run repeatedly:
  //diabase tin analogiki thyra kai ekxwrhse thn timh sthn metavlhth FlameInt
  FlameInt = analogRead(FlameSensorPin);
  //ektypwse to apotelesma sthn seiriaki othoni
  Serial.println(FlameInt);

  //an h entash einai mhden.
  if(FlameInt == 0) {
    //apenergopoihse to synagermo.
    noTone(BuzzerPin);
  }
  //diaforetika
  else{
    //energopoihse to synagermo gia 6 sec.
    for(int = 0; i<20; i++) {
      tone(BuzzerPin,4000);
      delay(200);
      noTone(BuzzerPin);
      delay(100);
    }
  }
  //Paush 100ms
  delay(100);
}
    }
  }
  }
  }
