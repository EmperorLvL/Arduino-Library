

void setup() {
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void Reset()
{
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
}

void Zero()
{
  Reset();
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
}

void One()
{
  Reset();
  digitalWrite(7, HIGH);
  digitalWrite(13, HIGH);
}

void Two()
{
  Reset();
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
}

void Three()
{
  Reset();
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
}

void Four()
{
  Reset();
  digitalWrite(7, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(13, HIGH);
}

void Five()
{
  Reset();
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
}


void Six()
{
  Reset();
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
}

void Seven()
{
  Reset();
  digitalWrite(7, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
}

void Eight()
{
  Reset();
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
}

void Nine()
{
  Reset();
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
}

void displayNumber(const String& number, const int duration = 1000)
{
  for(int i = 0; i < number.length(); i++)
  {
    char Number = reinterpret_cast<char>(number[i]);
    switch(Number)
    {
      case '0':
      Zero();
      break;
      case '1':
      One();
      break;
      case '2':
      Two();
      break;
      case '3':
      Three();
      break;
      case '4':
      Four();
      break;
      case '5':
      Five();
      break;
      case '6':
      Six();
      break;
      case '7':
      Seven();
      break;
      case '8':
      Eight();
      break;
      case '9':
      Nine();
      break;
    }
    delay(duration);
  }
}

void loop() {
  displayNumber("0123456789");
}