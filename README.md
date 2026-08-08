# Waste Segregation System

> **Archived.** The reviewed and corrected version of this project lives in
> [embedded-iot-projects / waste-segregation](https://github.com/Penchal9959/embedded-iot-projects/tree/main/waste-segregation), alongside the others from the same series. Work happens there;
> nothing here changes.

## What this was

A bin that sorts what you drop into it. An IR pair detects an object on the
chute, a moisture probe decides whether it is wet or dry, and a servo tips the
chute to one side or the other before returning to centre.

The sorting rule is conductivity: wet organic waste conducts between the probe
contacts, dry waste does not. It is crude and it works for the two categories
Indian municipal collection actually asks households to separate.

## Hardware

Arduino UNO, IR obstacle sensor, moisture probe, SG90 servo, 16x2 LCD.

## Why it was archived

Twelve one-off repositories of two files each is not a portfolio, it is a
list. They were consolidated into one maintained repository with the
documentation and the build check they never had. This one is kept so
existing links still resolve.

## Licence

[MIT](LICENSE)
