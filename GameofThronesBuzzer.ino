#define Do 262
#define Re 294 
#define Mi 330
#define Fa 349
#define Sol 392 
#define La 440 
#define Si 494
#define Pausa 0
 
char buz = 8; //pino conectado no buzzer

int notes[] = {La,Re,Fa,Sol,La,Re,Fa,Sol,Mi,Pausa,Sol,Do,Fa,Mi,Sol,Do,Fa,Mi,Re};
int time_[] = {500,300,250,250,250,300,200,200,700,200,500,500,200,200,200,500,200,200,500};

void toc(int note,int time_){
    tone(buz,note,time_);
    delay(time_);
}

void setup(){
    Serial.begin(9600);
    pinMode(buz, OUTPUT); // seta o pino como saída
 
}
void loop(){
  Serial.print(sizeof  notes/sizeof  notes[0]);
  for (int i = 0; i < sizeof  notes/sizeof  notes[0]; i++){
    toc(notes[i],time_[i]);
  }
}
