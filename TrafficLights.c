#pragma message "Compiling Project"
#pragma message __DATE__
#pragma message __TIME__

#define p_red 12
#define p_orange 11
#define p_green 10

#define p_fg_red 9
#define p_fg_green 8

void setup() {
  pinMode(p_red, OUTPUT);
  pinMode(p_orange, OUTPUT);
  pinMode(p_green, OUTPUT);

  pinMode(p_fg_red, OUTPUT);
  pinMode(p_fg_green, OUTPUT);
}

void red()
{
  digitalWrite(p_red, HIGH);
  digitalWrite(p_orange, LOW);
  digitalWrite(p_green, LOW);
  digitalWrite(p_fg_red, LOW);
  digitalWrite(p_fg_green, HIGH);
}

void red_orange()
{
  digitalWrite(p_red, HIGH);
  digitalWrite(p_orange, HIGH);
  digitalWrite(p_green, LOW);
  digitalWrite(p_fg_red, HIGH);
  digitalWrite(p_fg_green, LOW);
}

void orange()
{
  digitalWrite(p_red, LOW);
  digitalWrite(p_orange, HIGH);
  digitalWrite(p_green, LOW);
  digitalWrite(p_fg_red, HIGH);
  digitalWrite(p_fg_green, LOW);
}

void green()
{
  digitalWrite(p_red, LOW);
  digitalWrite(p_orange, LOW);
  digitalWrite(p_green, HIGH);
  digitalWrite(p_fg_red, HIGH);
  digitalWrite(p_fg_green, LOW);
}

void routine()
{
  green();
  delay(5000);
  orange();
  delay(1000);
  red();
  delay(5000);
  red_orange();
  delay(1000);
}

void loop() {
  routine();
}
