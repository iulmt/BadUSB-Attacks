//This DigiSpark script opens up the powershell and makes your computer speak out a message.
#include "DigiKeyboard.h"
void setup() 
{
  //empty
}

void loop() 
{
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("Add-Type -AssemblyName System.speech");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("$speak = New-Object System.Speech.Synthesis.SpeechSynthesizer");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  //Uncomment these lines to use a female voice
  //DigiKeyboard.print("$speak.SelectVoice('Microsoft Zira Desktop')");
  //DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //DigiKeyboard.delay(500);
  DigiKeyboard.print("@speak.Speak(\"Here is a joke. Why do Java programmers wear glasses? Because they can't C#.\")");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_N);
  for (;;) 
  {
    /*empty*/
  }
}
