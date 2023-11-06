// Assignment 07
// Name: Matias da Silva Moretti
// 05-Nov-2023
// Description: This file was created for the Assignment7 to Internet of Things class. 
//              This file was divided in 5 principal functions, one of each level of the assignment. 
//              To test each level, you need to uncomment the desired level inside the void loop().

/*************************************************
* Public Constants
*************************************************/
#define NOTE_B0 31
#define NOTE_C1 33
#define NOTE_CS1 35
#define NOTE_D1 37
#define NOTE_DS1 39
#define NOTE_E1 41
#define NOTE_F1 44
#define NOTE_FS1 46
#define NOTE_G1 49
#define NOTE_GS1 52
#define NOTE_A1 55
#define NOTE_AS1 58
#define NOTE_B1 62
#define NOTE_C2 65
#define NOTE_CS2 69
#define NOTE_D2 73
#define NOTE_DS2 78
#define NOTE_E2 82
#define NOTE_F2 87
#define NOTE_FS2 93
#define NOTE_G2 98
#define NOTE_GS2 104
#define NOTE_A2 110
#define NOTE_AS2 117
#define NOTE_B2 123
#define NOTE_C3 131
#define NOTE_CS3 139
#define NOTE_D3 147
#define NOTE_DS3 156
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_FS3 185
#define NOTE_G3 196
#define NOTE_GS3 208
#define NOTE_A3 220
#define NOTE_AS3 233
#define NOTE_B3 247
#define NOTE_C4 262
#define NOTE_CS4 277
#define NOTE_D4 294
#define NOTE_DS4 311
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_FS4 370
#define NOTE_G4 392
#define NOTE_GS4 415
#define NOTE_A4 440
#define NOTE_AS4 466
#define NOTE_B4 494
#define NOTE_C5 523
#define NOTE_CS5 554
#define NOTE_D5 587
#define NOTE_DS5 622
#define NOTE_E5 659
#define NOTE_F5 698
#define NOTE_FS5 740
#define NOTE_G5 784
#define NOTE_GS5 831
#define NOTE_A5 880
#define NOTE_AS5 932
#define NOTE_B5 988
#define NOTE_C6 1047
#define NOTE_CS6 1109
#define NOTE_D6 1175
#define NOTE_DS6 1245
#define NOTE_E6 1319
#define NOTE_F6 1397
#define NOTE_FS6 1480
#define NOTE_G6 1568
#define NOTE_GS6 1661
#define NOTE_A6 1760
#define NOTE_AS6 1865
#define NOTE_B6 1976
#define NOTE_C7 2093
#define NOTE_CS7 2217
#define NOTE_D7 2349
#define NOTE_DS7 2489
#define NOTE_E7 2637
#define NOTE_F7 2794
#define NOTE_FS7 2960
#define NOTE_G7 3136
#define NOTE_GS7 3322
#define NOTE_A7 3520
#define NOTE_AS7 3729
#define NOTE_B7 3951
#define NOTE_C8 4186
#define NOTE_CS8 4435
#define NOTE_D8 4699
#define NOTE_DS8 4978
#define REST     0
/*************************************************/

/* 1 - TETRIS *************************************/
// -------------------------------------------------
// Copyright (c) 2022 HiBit <https://www.hibit.dev>
// -------------------------------------------------
int melodyTETRIS[] = {
    NOTE_E5, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_A4, NOTE_C5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5,
    NOTE_C5, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_F5, NOTE_A5, NOTE_G5, NOTE_F5, NOTE_E5, NOTE_C5, NOTE_E5, NOTE_D5, NOTE_C5,
    NOTE_B4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_C5, NOTE_A4, NOTE_A4, REST, NOTE_E5, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_C5, NOTE_B4,
    NOTE_A4, NOTE_A4, NOTE_C5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_C5, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_B4, NOTE_C5,
    NOTE_D5, NOTE_F5, NOTE_A5, NOTE_G5, NOTE_F5, NOTE_E5, NOTE_C5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5,
    NOTE_C5, NOTE_A4, NOTE_A4, REST, NOTE_E5, NOTE_C5, NOTE_D5, NOTE_B4, NOTE_C5, NOTE_A4, NOTE_GS4, NOTE_B4, REST, NOTE_E5, NOTE_C5,
    NOTE_D5, NOTE_B4, NOTE_C5, NOTE_E5, NOTE_A5, NOTE_GS5
};
int durationsTETRIS[] = {
    4, 8, 8, 4, 8, 8, 4, 8, 8, 4, 8, 8, 4, 8, 4, 4, 4, 4, 8, 4, 8, 8, 4, 8, 4, 8, 8, 4, 8, 4, 8, 8, 4, 8, 8, 4, 4, 4, 4, 4, 4,
    4, 8, 8, 4, 8, 8, 4, 8, 8, 4, 8, 8, 4, 8, 4, 4, 4, 4, 8, 4, 8, 8, 4, 8, 4, 8, 8, 4, 8, 4, 8, 8, 4, 8, 8, 4, 4, 4, 4, 4, 4,
    2, 2, 2, 2, 2, 2, 2, 4, 8, 2, 2, 2, 2, 4, 4, 2, 2
  };
  
/**************************************************/

/* 2 - HOME ALONE *********************************/
// -------------------------------------------------
// Copyright (c) 2022 HiBit <https://www.hibit.dev>
// -------------------------------------------------
  int melodyHOMEALONE[] = {
    NOTE_E4, NOTE_C5, NOTE_B4, NOTE_B4, NOTE_C5, NOTE_B4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_E4, NOTE_G4, NOTE_E4, NOTE_C5, NOTE_G4,
    NOTE_D4, NOTE_A4, NOTE_G4, NOTE_C4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_G4, NOTE_E4, NOTE_G4, NOTE_E4, NOTE_C5, NOTE_G4,
    NOTE_A4, NOTE_C5, NOTE_F4, NOTE_E4, NOTE_G4, NOTE_C4, NOTE_E4, NOTE_D4, REST, NOTE_E4,NOTE_C4, NOTE_F4, NOTE_D4,
    REST, NOTE_FS4, NOTE_D4, NOTE_A4, NOTE_G4, REST, NOTE_GS5, NOTE_E4, NOTE_B4, NOTE_A4, NOTE_F4, NOTE_C5, NOTE_A4, NOTE_B4,
    NOTE_G4, NOTE_E4, NOTE_G4, NOTE_E4, NOTE_C5, NOTE_G4, NOTE_D4, NOTE_A4, NOTE_G4, NOTE_C4, NOTE_F4, NOTE_E4, NOTE_D4,
    NOTE_G4, NOTE_E4, NOTE_G4, NOTE_E4, NOTE_C5, NOTE_G4, REST, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_G4, NOTE_E4, REST, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_G4, NOTE_E4,
    REST, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_G4, NOTE_E4, NOTE_C4, NOTE_C5, NOTE_B4, NOTE_D5, NOTE_E4, NOTE_G4, NOTE_E4,
    NOTE_C5, NOTE_G4, NOTE_C5
  };
  int durationsHOMEALONE[] = {
    4, 8, 8, 2, 8, 8, 4, 4, 4, 4, 4, 4, 2, 2, 4, 4, 4, 8, 8, 2, 2, 4, 4, 4, 4, 2, 2, 8, 8, 4, 8, 8, 4, 2, 2, 4, 8, 8, 4, 4,
    4, 8, 8, 4, 4, 4, 8, 8, 4, 4, 4, 8, 8, 2, 4, 4, 4, 4, 2, 2, 4, 4, 4, 8, 8, 2, 2, 4, 4, 4, 4, 2, 2, 4, 16, 16, 8, 4, 4,
    4, 16, 16, 8, 4, 4, 4, 16, 16, 8, 4, 4, 4, 2, 4, 4, 4, 4, 4, 2, 2, 1
  };
/**************************************************/

/* 3 - HARRY POTTER ******************************/
// -------------------------------------------------
// Copyright (c) 2022 HiBit <https://www.hibit.dev>
// -------------------------------------------------
int melodyHP[] = {
  REST, NOTE_D4, NOTE_G4, NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_D5, NOTE_C5,  NOTE_A4, NOTE_G4, NOTE_AS4, NOTE_A4, NOTE_F4, NOTE_GS4,
  NOTE_D4, NOTE_D4, NOTE_G4, NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_D5, NOTE_F5, NOTE_E5, NOTE_DS5, NOTE_B4, NOTE_DS5, NOTE_D5, NOTE_CS5,
  NOTE_CS4, NOTE_B4, NOTE_G4, NOTE_AS4, NOTE_D5, NOTE_AS4, NOTE_D5, NOTE_AS4, NOTE_DS5, NOTE_D5, NOTE_CS5, NOTE_A4, NOTE_AS4, NOTE_D5, NOTE_CS5,
  NOTE_CS4, NOTE_D4, NOTE_D5,  REST, NOTE_AS4, NOTE_D5, NOTE_AS4, NOTE_D5, NOTE_AS4, NOTE_F5, NOTE_E5, NOTE_DS5, NOTE_B4,
  NOTE_DS5, NOTE_D5, NOTE_CS5, NOTE_CS4, NOTE_AS4, NOTE_G4
};
int durationsHP[] = {
  2, 4, 4, 8, 4, 2, 4, 2, 2, 4, 8, 4, 2, 4, 1, 4, 4, 8, 4, 2, 4, 2, 4, 2, 4, 4, 8, 4, 2, 4, 1, 4, 2, 4, 2, 4, 2, 4, 2, 4,
  4, 8, 4, 2, 4, 1, 4, 4, 2, 4, 2, 4, 2, 4, 2, 4, 4, 8, 4, 2, 4, 1
};
/**************************************************/

/* 4 - PACMAN ************************************/
// -------------------------------------------------
// Copyright (c) 2022 HiBit <https://www.hibit.dev>
// -------------------------------------------------
int melodyPACMAN[] = {
  NOTE_B4, NOTE_B5, NOTE_FS5, NOTE_DS5,NOTE_B5, NOTE_FS5, NOTE_DS5, NOTE_C5,NOTE_C6, NOTE_G6, NOTE_E6, NOTE_C6, NOTE_G6, NOTE_E6,
  NOTE_B4, NOTE_B5, NOTE_FS5, NOTE_DS5, NOTE_B5,NOTE_FS5, NOTE_DS5, NOTE_DS5, NOTE_E5, NOTE_F5,NOTE_F5, NOTE_FS5, NOTE_G5, NOTE_G5, 
  NOTE_GS5, NOTE_A5, NOTE_B5,
  NOTE_B4, NOTE_B5, NOTE_FS5, NOTE_DS5,NOTE_B5, NOTE_FS5, NOTE_DS5, NOTE_C5,NOTE_C6, NOTE_G6, NOTE_E6, NOTE_C6, NOTE_G6, NOTE_E6,
  NOTE_B4, NOTE_B5, NOTE_FS5, NOTE_DS5, NOTE_B5,NOTE_FS5, NOTE_DS5, NOTE_DS5, NOTE_E5, NOTE_F5,NOTE_F5, NOTE_FS5, NOTE_G5, NOTE_G5, 
  NOTE_GS5, NOTE_A5, NOTE_B5,
  NOTE_B4, NOTE_B5, NOTE_FS5, NOTE_DS5,NOTE_B5, NOTE_FS5, NOTE_DS5, NOTE_C5,NOTE_C6, NOTE_G6, NOTE_E6, NOTE_C6, NOTE_G6, NOTE_E6,
  NOTE_B4, NOTE_B5, NOTE_FS5, NOTE_DS5, NOTE_B5,NOTE_FS5, NOTE_DS5, NOTE_DS5, NOTE_E5, NOTE_F5,NOTE_F5, NOTE_FS5, NOTE_G5, NOTE_G5, 
  NOTE_GS5, NOTE_A5, NOTE_B5  
};
int durationsPACMAN[] = {
  16, 16, 16, 16, 32, 16, 8, 16, 16, 16, 16, 32, 16, 8, 16, 16, 16, 16, 32, 16, 8, 32, 32, 32, 32, 32, 32, 32, 32, 16, 8,
  16, 16, 16, 16, 32, 16, 8, 16, 16, 16, 16, 32, 16, 8, 16, 16, 16, 16, 32, 16, 8, 32, 32, 32, 32, 32, 32, 32, 32, 16, 8,
  16, 16, 16, 16, 32, 16, 8, 16, 16, 16, 16, 32, 16, 8, 16, 16, 16, 16, 32, 16, 8, 32, 32, 32, 32, 32, 32, 32, 32, 16, 8    
}; 
/*************************************************/

/* 5 - XMAS **************************************/
// -------------------------------------------------
// Copyright (c) 2022 HiBit <https://www.hibit.dev>
// -------------------------------------------------
int melodyXMAS[] = {
  NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_G5, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_F5, 
  NOTE_F5, NOTE_F5, NOTE_F5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_G5
};
int durationsXMAS[] = {
  8, 8, 4, 8, 8, 4, 8, 8, 8, 8, 2, 8, 8, 8, 8, 8, 8, 8, 16, 16, 8, 8, 8, 8, 4, 4,
};
/*************************************************/

int buzzerPin = 5 ; // The buzzerPin is connected to pin 5 of the Arduino.
int button1Pin = 2; // The SW1 button is connect to pin 2 of the Arduino.

int pinRedLed = 11; // Pin for the Red light of RGB Led
int pinGreenLed = 10; // Pin for the Green light of RGB Led
int pinBlueLed = 9; // Pin for the Blue light of RGB Led

int millisStart = 0; // Variable to store the moment that the music starts to play
int diffMillis = 0; // Variable to store seconds of music playing
bool lightsOn = true; // Variable to control if will be lights show or not
bool playing = true; // Variable to control the status playing or not 
bool limitOn = false; // Variable to select if will set limit time to play the music

volatile bool changeSong = false ; // Valatile varianle to set what the number of the message


void setup() { //The Setup function runs once.
  Serial.begin(9600); // Start the serial configuration
  
  pinMode(buzzerPin, OUTPUT); //Configure the buzzer pin
  
  pinMode(button1Pin, INPUT); //Setup button1 pin as an input pin.
  attachInterrupt(digitalPinToInterrupt(button1Pin), nextSong, RISING); // Configure the interrupt button1
  
  pinMode(pinRedLed, OUTPUT); //Setup red LED pin as an output pin.
  pinMode(pinGreenLed, OUTPUT); //Setup green LED pin as an output pin.
  pinMode(pinBlueLed, OUTPUT); //Setup blue LED pin as an output pin.

}


void loop() {

  //level1();
  
  //level2();
  
  level3();
  
  //runMenu(); //Level 4
  
  //level5();
 
}


void level1(){
  
  /* 
   * Level 1: Copy and paste the source code to check if your buzzer works.
   */
  
  if(digitalRead(button1Pin) == HIGH){
  	tone(buzzerPin, 200, 500);  
  } 
  
}


void level2(){
  
  /* 
   * Level 2: We will create a library, in the online version just copy and paste at top of code.
   */
  
  tone(buzzerPin, NOTE_B4,408);
  delay(408);
  tone(buzzerPin, NOTE_A4,408);
  delay(408);
  tone(buzzerPin, NOTE_G4,408);
  delay(408);
  tone(buzzerPin, NOTE_A4,408);
  delay(408);
  tone(buzzerPin, NOTE_B4,408);
  delay(408);
  tone(buzzerPin, NOTE_B4,408);
  delay(408);
  tone(buzzerPin, NOTE_B4,408);
  
}


void level3() {
  
  /*
   * Level 3: Create or find a song online and use arrays to store the notes and durations. Then add
   * a light show. The lights can be linked to a specific tone or you can just make a random colour
   */
  
  limitOn = false; // Turn the limit on (10 seconds)  
  lightsOn = true; // Turn the light show ON
  playing = true;  // Put the status to playing
  
  chosenMusic(5); // Play the 5th music (XMAS)
  
}


void runMenu(){
  
  /*
   * Level 4: Menu system. Create a menu on the monitor that gives the user an option between 3
   * songs. Have each song and the menu stored in different methods where the only line in your
   * main function is runMenu();
   */

  limitOn = false; // Turn the limit off, so the music will play until its end
  lightsOn = true; // Turn the light show ON  
  
  // Print the menu options on serial monitor
  Serial.println("Choose");    
  Serial.println("1 to Tetris");    
  Serial.println("2 to Home Alone");    
  Serial.println("3 to Harry Potter");      

  while (Serial.available() == 0) {
    // Stop the program until an input is given
  }
  
  int userInput = Serial.parseInt(); // Get the user input (Integer)
  
  // If the input is 1, 2 or 3 will call the function chosenMusic to start the music
  if ((userInput == 1) || (userInput == 2) || (userInput == 3)) {
    chosenMusic(userInput);
  }  
 
}

void level5() {
  
  /*
   * Level 5(optional): Make a game that keeps track of how much time it takes a user to guess the
   * name of a song. The code should look something like this:
   * 1. Create an array of 5 songs 10 seconds each(approx).
   * 2. Create a loop that goes through the songs, when the song starts a timer starts, if the
   * user hits a button it will stop the timer and add the time to a running total.
   * 3. After all the songs play the total score will be printed to the screen with a message.
   */
  
  limitOn = true; // Set the limit to on (each music will play only 10 seconds approximately)
  float totalMillis = 0;  // Set the total to zero
  
  int songsOrderToPlay[5] = {1,2,3,4,5}; // Array to control the music order
  
  lightsOn = true; // Set the light show to ON
 
  if (playing) { 
    for (int i = 0;i < 5;i++) { // Will play each music until the last on 
      diffMillis = 0; // put the difference to zero
      millisStart = millis(); // Get the moment that the music starts
      chosenMusic(songsOrderToPlay[i]); // Play the music
      totalMillis = totalMillis + diffMillis;  // Summarize the total of seconds 
    }

    // After the end of music, the ammount of seconds that the player used to guess the musics will be displayed on terminal monitor
    Serial.println("Total secs:");           
    Serial.println(totalMillis/1000);       
  }
  
  playing = false; // Finish the game until the player press the button again
  
}

// Function tho route the musics depending of the number, the corresponding music will be played
void chosenMusic(int nbr){
  switch (nbr) {
    case 1:
      playMusicTETRIS(); // Case the function was called with number 1, Tetris music will be played
      break;
    case 2:
      playMusicHOMEALONE(); // Case the function was called with number 2, Home Alone music will be played
      break;
    case 3:
      playMusicHP(); // Case the function was called with number 3, Harry Potter music will be played
      break;
    case 4:
      playMusicPACMAN(); // Case the function was called with number 4, PacMan music will be played
      break;
    case 5:
      playMusicXMAS(); // Case the function was called with number 5, Christmas music will be played
      break;    
    default:
      break;
  }
} 
  

// This function will play the music on the buzzer
void playMusic(int melody[], int durations[], int size, int msecs){
  
  int colorPos = 0; // Variable store the map result
  int randomRGB = 0; // Variable to randomize between R, G and B
  
  for (int note = 0; note < size; note++) { // this for will play all notes on buzzer
    if (!changeSong) { // Check if the player pressed the button to change the music
          
      if ((diffMillis <= 10000) || !limitOn) { // If the limit is on, the music qill play only 10 seconds
      
        if (lightsOn) { // Check if the lightshow need to be displayed
          colorPos = map(melody[note], 0,4978, 0, 255); // Map to get relative note to color
          randomRGB = random(0,3); // Randomize between 1-3 to determine what led will receive the 255
          if (randomRGB == 0) { // If 0 Red will receive 255 and Blue and Green will receive other values 
            changeLED(255,colorPos,random(0,255));
          } else if (randomRGB == 1) { // If 1 Green will receive 255 and Red and blue will receive other values
            changeLED(random(0,255),255,colorPos);
          } else { // else Blue will receive 255 and Red and green will receive other values
            changeLED(colorPos,random(0,255),255);
          }       
        }
        
        int duration = msecs / durations[note]; // Calc to get the correct duration
        tone(buzzerPin, melody[note], duration); // Play the tone on the buzzer with the duration time 
        int pauseBetweenNotes = duration * 1.30; // Calc to get the correct pause between notes
        delay(pauseBetweenNotes); // Pause between one note and other
        noTone(buzzerPin); // Stop the buzzer
        diffMillis = millis()-millisStart; // Get the difference between the music start and the current momment
      } 
    } else { // Else the player pressed the button, music need to stop and go to the next one
      changeSong = false; // Set the status to "changing music"
      note = size; // note = size to skip the for loop
    }
  }
  changeLED(0,0,0); // Turn the led off
}


// Function to play the Tetris Music
void playMusicTETRIS() { 
  int size = sizeof(durationsTETRIS) / sizeof(int); // Get the size of durations array   
  playMusic(melodyTETRIS,durationsTETRIS,size,1200); // Call the play function passing the right music arrays and size
}

// Function to play the Home Alone Music
void playMusicHOMEALONE() {
  int size = sizeof(durationsHOMEALONE) / sizeof(int); // Get the size of durations array
  playMusic(melodyHOMEALONE,durationsHOMEALONE,size,1000); // Call the play function passing the right music arrays and size
}

// Function to play the PacMan Music
void playMusicPACMAN() {
  int size = sizeof(durationsPACMAN) / sizeof(int); // Get the size of durations array
  playMusic(melodyPACMAN,durationsPACMAN,size,2000); // Call the play function passing the right music arrays and size
}

// Function to play the Christmas Music
void playMusicXMAS() {
  int size = sizeof(durationsXMAS) / sizeof(int); // Get the size of durations array
  playMusic(melodyXMAS,durationsXMAS,size,1500); // Call the play function passing the right music arrays and size
}

// Function to play the Harry Potter Music
void playMusicHP() {
  int size = sizeof(durationsHP) / sizeof(int); // Get the size of durations array
  playMusic(melodyHP,durationsHP,size,1000); // Call the play function passing the right music arrays and size
}
          
// Function called when the button is pressed
void nextSong() {
  changeSong = true; // Put the status to changing music
  if (!playing) { // if no music is playing, start the game again
    playing = true; // Change the status to start again
    changeSong = false; // Change the status to not changing music
  }
}

// Function to set the RGB colors
void changeLED(int redValue, int greenValue, int blueValue){
  analogWrite(pinRedLed, redValue); // Set the Red Led  
  analogWrite(pinGreenLed, greenValue); // Set the Green Led  
  analogWrite(pinBlueLed, blueValue); // Set the Blue Led      
}