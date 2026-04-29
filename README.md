# 🎓Emergency Response System
## 👥 Team Members

- **Md. Shaharia Islam** (ID: 20255103200)  
- **Inteshar Al Islam** (ID: 20255103168)  
- **Mujtahid Islam Abir** (ID: 20255103177)  

##  Overview

The **Emergency Response System** is a **console-based application built in C++** that simulates real-world emergency management. It prioritizes emergency requests based on severity and assigns the nearest available ambulance efficiently.

This project focuses on the **practical implementation of core data structures**, helping to understand how real-life emergency systems can be modeled logically and efficiently.


##  Objectives

-  Prioritize emergency cases based on severity  
-  Efficient ambulance allocation  
-  Implement undo functionality  
-  Optimize operations using data structures  
-  Apply theoretical knowledge to real-world problems  


##  Features

- Add emergency requests with severity levels  
- Automatic ambulance assignment (priority + distance based)  
- Track ambulance status (Available / Assigned / Returned)  
- View pending emergency cases  
- Undo last assignment  
- Return ambulance after service completion  
- Display hospital-wise ambulance details  


##  Data Structures Used

| Data Structure        | Purpose                              | Complexity |
|----------------------|--------------------------------------|-----------|
| Priority Queue       | Emergency prioritization             | O(log n)  |
| Stack                | Undo operations                      | O(1)      |
| Vector               | Dynamic data storage                 | O(1)      |
| Map                  | Location mapping & lookup            | O(log n)  |
| Graph (Adj Matrix)   | Distance calculation                 | O(n²)     |


##  System Workflow

```
User Input
   ↓
Priority Queue (Severity Handling)
   ↓
Graph (Find Nearest Ambulance)
   ↓
Assignment
   ↓
Update Status (Vector)
   ↓
Undo (Stack) / Completion Handling
```


##  Time Complexity

| Operation              | Complexity |
|-----------------------|-----------|
| Add Emergency         | O(log n)  |
| Assign Ambulance      | O(log n)  |
| Undo Operation        | O(1)      |
| Return Ambulance      | O(1)      |
| Lookup (Map)          | O(log n)  |

## File Information
- main.cpp → Main source code file
   
##  How to Run

###  Compile
```bash
g++ main.cpp -o emergency
```

###  Run
```bash
./emergency
```

##  Project Structure

```
 Emergency-Response-System
 ┣  main.cpp
 ┣  README.md
 ┣  Emergency_Response_System_Report.pdf
 ┗  (Other source files if added)
```


##  Limitations

- No database or file storage  
- Static distance calculation  
- No real-time GPS tracking  
- Console-based interface only  


##  Future Improvements

- Implement Dijkstra’s Algorithm for shortest path  
- Add database or file system support  
- Develop graphical user interface (GUI)  
- Integrate real-time location tracking  
- Expand hospital and ambulance network  


##  Conclusion

This project demonstrates how multiple data structures can be integrated to build an efficient and realistic emergency response system.


## 📄 Report


The full project report is included in this repository as Emergency_Response_System_Report.pdf
