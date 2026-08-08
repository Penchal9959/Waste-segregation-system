# Waste Segregation System

A reviewed and corrected version of this project, with a build check and
fuller documentation, is in [embedded-iot-projects / waste-segregation](https://github.com/Penchal9959/embedded-iot-projects/tree/main/waste-segregation) alongside the others from the same
series.

## What this was

A bin that sorts what you drop into it. An IR pair detects an object on the
chute, a moisture probe decides whether it is wet or dry, and a servo tips the
chute to one side or the other before returning to centre.

The sorting rule is conductivity: wet organic waste conducts between the probe
contacts, dry waste does not. It is crude and it works for the two categories
Indian municipal collection actually asks households to separate.

## Hardware

Arduino UNO, IR obstacle sensor, moisture probe, SG90 servo, 16x2 LCD.

## Licence

[MIT](LICENSE)
