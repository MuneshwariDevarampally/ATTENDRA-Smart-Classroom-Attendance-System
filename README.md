🤖 ATTENDRA – Smart Classroom Attendance Collection System

 An Intelligent RFID-Based Classroom Attendance Collection System Using a Line-Following Robot and Dual Raspberry Pi Communication.

Team Name: QUADRAROBOTRIX – Four Minds, One Mission.


 1. Project Overview

ATTENDRA is an intelligent RFID-based classroom attendance collection system designed to automate attendance management across multiple classrooms.

The project combines RFID technology, a line-following robot, Arduino UNO and dual Raspberry Pi communication to collect and transfer classroom attendance records wirelessly.

The system consists of two major units: a static classroom attendance collection system and a dynamic robot-based attendance collection system.

The main goal is to reduce manual effort, save time and improve the efficiency of classroom attendance management.

 🎯 2. Objectives

- Automate student attendance collection using RFID technology.
- Develop an autonomous line-following robot.
- Enable wireless communication between two Raspberry Pi boards.
- Collect attendance records from multiple classrooms.
- Maintain centralized attendance records.
- Reduce manual intervention in attendance management.

 ⚙️ 3. System Architecture

ATTENDRA consists of two interconnected systems.

 A. Static System – Classroom Attendance Collection

The static system is installed inside the classroom.

Components:
- Raspberry Pi Model 1
- RFID Reader
- RFID Cards
- Wi-Fi Connection

Working:
1. Students scan their RFID cards using the RFID reader.
2. The RFID reader identifies the student.
3. Raspberry Pi 1 processes the attendance information.
4. Attendance records are stored and updated in the attendance report.
5. Raspberry Pi 1 operates in Wi-Fi Station Mode.

 B. Dynamic System – Autonomous Attendance Collector

The dynamic system consists of a line-following robot that travels between classrooms.

Components:
- Raspberry Pi Model 2
- Arduino UNO
- IR Sensors
- Motor Driver
- DC Motors
- Robot Chassis

Working:
1. The robot follows a predefined black-line path.
2. Arduino UNO controls the movement of the robot.
3. IR sensors help the robot follow the designated path.
4. When the robot reaches a classroom, it stops.
5. Raspberry Pi 2 establishes wireless communication with the classroom Raspberry Pi 1.
6. Classroom attendance data is transferred to the robot system.
7. The process repeats until all classrooms are completed.

 🔄 4. Working Principle

The complete project follows this process:

1. Student identification through RFID cards.
2. Attendance registration in the classroom system.
3. Autonomous navigation of the line-following robot.
4. Classroom identification and stopping.
5. Wireless communication between the Raspberry Pi boards.
6. Attendance data collection and transfer.
7. Consolidation of attendance records.

 🛠️ 5. Hardware Requirements

| Component | Purpose |
|---|---|
| Raspberry Pi Model 1 | Classroom attendance collection |
| Raspberry Pi Model 2 | Wireless data collection on the robot |
| Arduino UNO | Robot movement control |
| RFID Reader | Student identification |
| RFID Cards | Student authentication |
| IR Sensors | Line following |
| Motor Driver | Motor control |
| DC Motors | Robot movement |
| Robot Chassis | Robot structure |

💻 6. Software Requirements

- Python
- Arduino Programming
- Tkinter GUI
- Pandas
- Openpyxl
- MySQL
- PySerial
- Microsoft Excel (.xlsx)

 📊 7. Expected Project Outcomes

- Automated RFID-based student identification.
- Autonomous line-following robot navigation.
- Wireless attendance data transfer.
- Centralized attendance report generation.
- Reduced manual attendance collection effort.

⭐ 8. Advantages

- Reduces manual work.
- Saves time in attendance collection.
- Provides RFID-based student identification.
- Enables wireless data communication.
- Supports centralized attendance management.

🚀 9. Future Scope

- Mobile application integration.
- Face recognition integration.
- Multi-floor robot navigation.
- Smart classroom integration.

👩‍💻 10. Project Team – QUADRAROBOTRIX

1. Ms. Devarampally Muneshwari
2. Ms. Kammari Apurva
3. Ms. Markindi Srujana
4. Ms. Morgi Vaishnavi

Project Guide: Mr. M. Kranthi Kumar

Institution: Sridevi Women's Engineering College


Note: Raspberry Pi source code, circuit diagrams, actual results and demonstration video will be added when available.


ATTENDRA – Making Classroom Attendance Smarter Through Robotics and Automation.

/-TEAM QUADRAROBOTRIX ❤️