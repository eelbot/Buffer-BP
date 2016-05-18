// Pin definitions for easy sketch modification
// INPUTS
const int in1 = 7;
const int in2 = 8;
const int in3 = 9;
const int in4 = 10;
const int in5 = 5;
const int in6 = 39;
const int in7 = 40;
const int in8 = 19;

// OUTPUTS
const int out1 = 38;
const int out2 = 37;
const int out3 = 15;
const int out4 = 14;
const int out5 = 34;
const int out6 = 13;
const int out7 = 12;
const int out8 = 11;

// Buffer enable
const int buffer_enable = 18;


void setup()
{
  // Turn off buffers to start (buffer_enable is active low)
  pinMode(buffer_enable, OUTPUT);
  digitalWrite(buffer_enable, HIGH);
  
  // Inputs
  pinMode(in1, INPUT);
  pinMode(in2, INPUT);
  pinMode(in3, INPUT);
  pinMode(in4, INPUT);
  pinMode(in5, INPUT);
  pinMode(in6, INPUT);
  pinMode(in7, INPUT);
  pinMode(in8, INPUT);
  
  // Outputs
  pinMode(out1, OUTPUT);
  pinMode(out2, OUTPUT);
  pinMode(out3, OUTPUT);
  pinMode(out4, OUTPUT);
  pinMode(out5, OUTPUT);
  pinMode(out6, OUTPUT);
  pinMode(out7, OUTPUT);
  pinMode(out8, OUTPUT);
  
  // Initialize all outputs to 0
  digitalWrite(out1, LOW);
  digitalWrite(out2, LOW);
  digitalWrite(out3, LOW);
  digitalWrite(out4, LOW);
  digitalWrite(out5, LOW);
  digitalWrite(out6, LOW);
  digitalWrite(out7, LOW);
  digitalWrite(out8, LOW);
  
  // Enable buffers
  digitalWrite(buffer_enable, LOW);
}

void loop()
{
  /**
  ** The following example transfers the input states directly
  ** to the output states. Effectively, a 5V buffer, simply to
  ** demonstrate basic functionality.
  **/
  
  if (digitalRead(in1) == HIGH){ digitalWrite(out1, HIGH); }
  else { digitalWrite(out1, LOW); }

  if (digitalRead(in2) == HIGH){ digitalWrite(out2, HIGH); }
  else { digitalWrite(out2, LOW); }

  if (digitalRead(in3) == HIGH){ digitalWrite(out3, HIGH); }
  else { digitalWrite(out3, LOW); }

  if (digitalRead(in4) == HIGH){ digitalWrite(out4, HIGH); }
  else { digitalWrite(out4, LOW); }

  if (digitalRead(in5) == HIGH){ digitalWrite(out5, HIGH); }
  else { digitalWrite(out5, LOW); }

  if (digitalRead(in6) == HIGH){ digitalWrite(out6, HIGH); }
  else { digitalWrite(out6, LOW); }

  if (digitalRead(in7) == HIGH){ digitalWrite(out7, HIGH); }
  else { digitalWrite(out7, LOW); }

  if (digitalRead(in8) == HIGH){ digitalWrite(out8, HIGH); }
  else { digitalWrite(out8, LOW); }  
}
