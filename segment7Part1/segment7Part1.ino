int pa = 5;
int pb = 6;
int pc = 7;
int pd = 8;
int pe = 9;
int pf = 10;
int pg = 11;
int ph = 12;

String numbers[10];

void setup(){
  pinMode(pa, OUTPUT);
  pinMode(pb, OUTPUT);
  pinMode(pc, OUTPUT);
  pinMode(pd, OUTPUT);
  pinMode(pe, OUTPUT);
  pinMode(pf, OUTPUT);
  pinMode(pg, OUTPUT);
  pinMode(ph, OUTPUT);
  
}

void loop(){
  //writeNumber(3);
  for (int i=0;i<10;i++){
    writeNumber(i);
    delay(200);
  }
  
}

void clearDigit(){
  digitalWrite(pa, LOW);
  digitalWrite(pb, LOW);
  digitalWrite(pc, LOW);
  digitalWrite(pd, LOW);
  digitalWrite(pe, LOW);
  digitalWrite(pf, LOW);
  digitalWrite(pg, LOW);
  digitalWrite(ph, LOW);
}

void writeNumber(int number){
  numbers[0] = "11111100";
  numbers[1] = "01100000";
  numbers[2] = "11011010";
  numbers[3] = "11110010";
  numbers[4] = "01100110";
  numbers[5] = "10110110";
  numbers[6] = "00111110";
  numbers[7] = "11100000";
  numbers[8] = "11111110";
  numbers[9] = "11100110";
  String aux = numbers[number];
  clearDigit();
  if (String(aux[0])=="1"){digitalWrite(pa,HIGH);}
  if (String(aux[1])=="1"){digitalWrite(pb,HIGH);}
  if (String(aux[2])=="1"){digitalWrite(pc,HIGH);}
  if (String(aux[3])=="1"){digitalWrite(pd,HIGH);}
  if (String(aux[4])=="1"){digitalWrite(pe,HIGH);}
  if (String(aux[5])=="1"){digitalWrite(pf,HIGH);}
  if (String(aux[6])=="1"){digitalWrite(pg,HIGH);}
  if (String(aux[7])=="1"){digitalWrite(ph,HIGH);}
  
}
