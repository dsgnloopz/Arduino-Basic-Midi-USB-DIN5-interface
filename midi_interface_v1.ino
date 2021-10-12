
#include <AltSoftSerial.h>
AltSoftSerial midiSerial;

// #define RXPIN 8
// #define TXPIN 9


// This Code was wrtten By DSGN Loopz, use it, modify it, distribute it and enjoy it as you need
// consider leaving this statement here as a credit to the author
// check the ReadMe file youll find with this file for further information
// @dsgnloopz  ------  @desgeneradotv follow me if this was helpfull for you, that will be really helpfull for supporting my work
// and keep yourself updated with my projects



// SETUP ///////////////////////////////////////////
void setup()
{
  Serial.begin( 31250 );
  midiSerial.begin(31250);
}

// LOOP ////////////////////////////////////////////
void loop()
{  


  while( midiSerial.available() > 0 )
  {
    int midiByte = midiSerial.read();
  
    Serial.write ( midiByte );
  }
  
  while( Serial.available() > 0 )
  {
    int serialByte = Serial.read();
    
    midiSerial.write ( serialByte );
}
}



    
