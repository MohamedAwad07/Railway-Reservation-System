# Railway Reservation System

## Overview

This project is a **Railway Reservation System** developed in **C++** using **WinForms** for the user interface and **SQL** for database integration. The system efficiently handles train reservations by utilizing suitable data structures to optimize data storage and access. The project incorporates key features such as booking tickets, checking seat availability, and managing user data, all while ensuring efficient database management and user experience.

## Features

- **Train Reservation:**  
  - Allows users to view available trains, select seats, and make reservations.
  
- **Efficient Data Storage & Access:**  
  - Implements data structures like **hash tables**, **linked lists**, and **binary search trees (BSTs)** to efficiently store and access reservation data, ensuring quick seat availability checks and efficient booking operations.

- **SQL Database Integration:**  
  - Integrates an SQL database for storing and retrieving user data, train schedules, and reservation details. SQL queries are used for data manipulation, providing a robust backend for the system.

- **WinForms Interface:**  
  - A user-friendly **WinForms** interface that allows users to interact with the system easily, providing features such as seat booking, cancellation, and viewing reservation history.

## Requirements

- **Software:**  
  - **C++** for the implementation of the system’s core logic.
  - **SQL** for database integration and management.
  - **WinForms** for the graphical user interface.
  - A compatible **SQL database server** (e.g., MySQL, SQLite).

- **Libraries/Tools:**  
  - **SQL connector library** for integrating the database with the C++ application.
  - **WinForms** for creating the UI elements in C++.
  - **C++ Standard Library** for implementing data structures and algorithms.

Install the required dependencies using your C++ environment or tools.

## Installation

1. Clone the repository:
    ```bash
    git clone https://github.com/yourusername/railway-reservation-system.git
    ```

2. Navigate into the project directory:
    ```bash
    cd railway-reservation-system
    ```

3. **Set up the database**:  
   - Create a database and tables based on the provided SQL schema (`database.sql`).
   - Configure the connection settings to match your SQL server details.

4. **Build the project**:  
   - Open the project in your C++ IDE (e.g., Visual Studio).
   - Build the project to compile the application.

## Usage

1. **Run the application**:
    - Launch the system via the **WinForms** interface, which allows users to interact with the system.

2. **Booking Process**:
    - The user can search for trains based on departure and destination.
    - View available seats and select a seat for booking.
    - Complete the reservation, and details are stored in the database.

3. **Cancellation Process**:
    - Users can view their reservation history and cancel bookings as needed.

## Database Integration

The system uses **SQL** to store and manage train schedules, reservations, and user information.

- **Tables Used**:
  - `Trains` – Contains information about available trains, including train number, source, destination, and schedule.
  - `Users` – Stores user details for the reservations.
  - `Reservations` – Stores information about reserved tickets, including seat number, user ID, and train ID.

## Data Structures

Efficient data handling and access are achieved through the use of the following data structures:

- **Hash Table**:  
  - Used for fast access to reservation data by train ID or user ID.

- **Linked List**:  
  - Efficiently stores reservations for each train, allowing for quick insertions and deletions.

- **Binary Search Tree (BST)**:  
  - Used for managing the train schedule data, allowing fast search, insert, and delete operations for train schedules.
