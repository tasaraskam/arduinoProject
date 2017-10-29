//ekxwrhsh stis times blue green kai red tis times twn thurwn pou tha xrhsimopoihsoume.
int Blue = 11;
int Green = 10;
int Red = 9;
void setup() {
  // put your setup code here, to run once:
  //orismos twn output.
  pinMode(Blue,OUTPUT);
  pinMode(Green,OUTPUT);
  pinMode(Red,OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  //energopoihsh prasinou xrwmatos
  analogWrite(Green,255);
  //paush gia 5 deuterolepta.
  delay(5000);
  //apenergopoihsh prasinou xrwmatos.
  analogWrite(Green,0);
  //paush gia 10 milliseconds.
  delay(10);
  //energopoihsh tou portokali xrwmatos
  analogWrite(Red,100);
  analogWrite(Green,20);
  //paush gia 5 deuterolepta.
  delay(5000);
  //apenergopoihsh portokali xrwmatos.
  analogWrite(Red,0);
  analogWrite(Green,0);
  //paush gia 10ms;
  delay(10);
  //energopoihsh kokkinou xrwmatos
  analogWrite(Red,255);
  //paush gia 5 deuterolepta.
  delay(5000);
  //apenergopoihsh tou kokkinou xrwmatos.
  analogWrite(Red,0);
  //paush gia 10ms
  delay(10);
}
