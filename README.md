🎓 Emergency-Response-System

👥 Team Members

Name: Inteshar Al Islam (ID: 20255103168)

Name: Md. Muztahid Hossain Abir (ID: 20255103177)

Name: Md. Shaharia Islam (ID: 20255103200)

## Overview

This project is an Emergency Response System developed using the C++ programming language. It is a console-based application designed to manage emergency situations by assigning ambulances efficiently based on severity and availability. The system simulates real-life emergency handling where multiple hospitals and ambulances are involved.

## Project Objective

The main objective of this project is to apply data structures such as priority queue, stack, and queue in a real-world scenario. It helps in understanding how emergency cases can be prioritized and managed efficiently while improving programming logic and problem-solving skills.

## Features

- Add new emergency request (with severity level)
- Assign ambulance from available hospitals
- Track ambulance status (assigned, available, returned)
- Show pending emergency requests
- Undo last assignment (based on severity handling)
- Return ambulance after service completion
- Display all ambulance details per hospital

## Data Structures Used

- **Priority Queue**: Handles emergency requests based on severity (higher severity gets priority)
- **Stack**: Used to undo previous assignments
- **Queue / Array**: Stores ambulance and hospital data
- **Linked List (if used)**: Tracks active or recent emergency cases

## How the System Works

The program follows a menu-driven system. Users can input emergency cases with severity levels. The system automatically assigns the nearest available ambulance based on priority. Each hospital has multiple ambulances, and their availability is tracked.

If an emergency is canceled or needs correction, the undo feature allows reverting the last assignment. The system also ensures that invalid operations (like returning unassigned ambulances) are handled properly.

How to Run

1. Compile the program:
   g++ Emergency.cpp -o emergency

2. Run the program:
    ./emergency

## File Information

- Emergency.cpp → Main source code file
- Other .cpp files → Additional implementations (if any)

## Conclusion

This project demonstrates how multiple data structures can be combined to build an efficient emergency response system. It highlights real-time problem solving, priority handling, and resource management, while strengthening understanding of data structures and system design in C++.

📄 Report

The full project report is included in this repository as Emergency_Response_System_Report.pdf
