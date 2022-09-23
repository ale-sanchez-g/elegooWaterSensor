# elegooWaterSensor

This is a small Arduino project to read the water level of a container and turn the relevant LED base on the water level.

## Prerequisites

- Arduino IDE
- USB port / Adaptor for Mac M1
- Breadboard
- 3 resitors 220 ohm
- blue / green / red LEDs
- Arduino UNO R3 /  ELEgoo UNO R3
- Water Level Monitor (Analog sensor)

## Circuit schematics

![](water_level_schema.png)

## Current problems

- [ ] DEFECT 1: Current cicuite set up seems to be on opposity polarity and have to swap HIGHS for LOWS to reduce power consumtion, and LEDs be On instead of OFF. -> 