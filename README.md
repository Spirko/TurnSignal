# TurnSignal
Arduino-powered turn signal controller.
The goal is to have a gyroscope-controlled auto-shutoff feature,
for motorcycles that don't automatically turn off their turn signals.

The project is currently in prototyping.

Main components:
 * Arduino Nano
 * SPDT switch or 10k potentiometer to simulate turn signal switch.
 * 2-channel 5V relay module, such as http://www.amazon.com/SunFounder-Shield-Module-Arduino-Channel/dp/B00E0NTPP4
 * Accelerometer/gyro, Addicore MPU9250 because that's what I had.
