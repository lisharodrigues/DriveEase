#define TRIG_PIN 9
#define ECHO_PIN 10

#define BUTTON_LIGHT 2
#define BUTTON_AC 3
#define BUTTON_WINDOW 4

#define LED_LIGHT 5
#define LED_AC 6
#define LED_WINDOW 7

void setup() {
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);
    
    pinMode(BUTTON_LIGHT, INPUT);
    pinMode(BUTTON_AC, INPUT);
    pinMode(BUTTON_WINDOW, INPUT);

    pinMode(LED_LIGHT, OUTPUT);
    pinMode(LED_AC, OUTPUT);
    pinMode(LED_WINDOW, OUTPUT);

    Serial.begin(9600);
}

void loop() {
    // Read buttons
    int lightButton = digitalRead(BUTTON_LIGHT);
    int acButton = digitalRead(BUTTON_AC);
    int windowButton = digitalRead(BUTTON_WINDOW);

    // Control LEDs
    if (lightButton == HIGH) {
        digitalWrite(LED_LIGHT, HIGH);
    } else {
        digitalWrite(LED_LIGHT, LOW);
    }

    if (acButton == HIGH) {
        digitalWrite(LED_AC, HIGH);
    } else {
        digitalWrite(LED_AC, LOW);
    }

    if (windowButton == HIGH) {
        digitalWrite(LED_WINDOW, HIGH);
    } else {
        digitalWrite(LED_WINDOW, LOW);
    }

    // Ultrasonic Sensor Logic
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);

    long duration = pulseIn(ECHO_PIN, HIGH);
    int distance = duration * 0.034 / 2;

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    delay(100);
}
