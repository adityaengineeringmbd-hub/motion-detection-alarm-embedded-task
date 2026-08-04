# Smart Motion Security System — Task 3

## Objective
Upgrade the Task-2 PIR motion sensor into a smart automation system with decision-making logic and live monitoring.

## How it works
The PIR sensor continuously monitors the surrounding area for movement. When motion is detected (`digitalRead(pirPin) == HIGH`), the system automatically triggers two outputs — an LED and a buzzer — to alert the user, while printing "Motion Detected! Alert ON" to the Serial Monitor. When no motion is present, both outputs turn OFF, and the system logs "No Motion. System Idle." This IF/ELSE logic is the core automation behavior required for Task-3, replacing manual decision-making with an autonomous embedded response — similar to how real home/office security systems detect intrusions and raise alerts.

## Feedback / Monitoring
Live sensor state is displayed via Serial Monitor.

## Real-world application
This mirrors commercial PIR-based security alarms used in homes and offices, where automated alerting removes the need for constant human supervision.
