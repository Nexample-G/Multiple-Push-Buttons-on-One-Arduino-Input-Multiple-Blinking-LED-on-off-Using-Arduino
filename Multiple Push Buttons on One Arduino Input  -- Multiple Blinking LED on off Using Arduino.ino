/* 
 *  Multiple Push Buttons on One Arduino Input // Multiple Blinking LED on/off Using Arduino
 *  Arduino Tutorial - https://www.youtube.com/c/nexample
 *  Dev: Nexample // Date: 10/7/2021 // Ver:0.1
 */
  int BT0, BT1, BT2, BT3, BT4, LW, LED = 0;

  int LED1 = 4;
  int LED2 = 5;
  int LED3 = 6;
  int LED4 = 7;
void setup(){
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}
void loop(){
  int BT = analogRead(A1);
  
  if        (BT < 600){                   BT0 = 1;
  } else if (BT > 600 && BT < 700) {      BT0 = 2;
  } else if (BT > 700 && BT < 800) {      BT0 = 3;
  } else if (BT > 800 && BT < 900) {      BT0 = 4;  }

if (BT0) {
   if (BT0 == 1) { 
    LED = LED1; 
    if(BT1){ LW = BT1 = 0;  } else { LW = BT1 = 1;  }
   } 
   if (BT0 == 2) { 
    LED = LED2; 
    if(BT2){ LW = BT2 = 0;  } else { LW = BT2 = 1;  }
   } 
   if (BT0 == 3) { 
    LED = LED3; 
    if(BT3){ LW = BT3 = 0;  } else { LW = BT3 = 1;  }
   }
   if (BT0 == 4) { 
    LED = LED4; 
    if(BT4){ LW = BT4 = 0;  } else { LW = BT4 = 1;  }
   }
   
if (LW){
  digitalWrite( LED, HIGH );
} else{
  digitalWrite( LED, LOW);
}
    delay(500);
    BT0 = 0;
}
}

