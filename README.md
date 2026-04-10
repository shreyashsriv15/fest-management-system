# 🎉 College Fest Management System (C++ OOP)

## 📌 Description

The **College Fest Management System** is a C++ based console application designed to manage events in a college fest.
It allows organizers to create and manage events, while participants can register and interact with them.

This project demonstrates strong use of **Object-Oriented Programming (OOP)** concepts and simulates a real-world event booking system.

---

## 🚀 Features

* 👨‍💼 Organizer (Admin) Panel

  * Add / Update / Delete Events
  * View event details
  * View participation analytics

* 🧑‍🎓 Participant Panel

  * View available events
  * Register for events
  * Cancel registration

* 🎟️ Event Management

  * Seat/participant limit handling
  * Event categories (Cultural, Technical, etc.)

* 📊 Analytics

  * Total registrations
  * Most popular event

---

## 🧠 OOP Concepts Used

* ✅ Abstraction (Abstract base class: Person/User)
* ✅ Inheritance (Organizer & Participant)
* ✅ Polymorphism (Virtual functions)
* ✅ Templates (Generic Repository class)
* ✅ Exception Handling (Custom exceptions for errors)

---

## 🛠️ Technologies Used

* C++
* Standard Template Library (STL)
* File Handling (`fstream`)

---

## ▶️ How to Run

1. Clone the repository
2. Open project in VS Code or any C++ IDE
3. Compile the program:

   ```bash
   g++ main.cpp -o fest
   ```
4. Run:

   ```bash
   ./fest
   ```

---

## 📂 Project Structure

```
FestManagementSystem/
 ├── src/
 │    ├── main.cpp
 │    ├── Event.cpp
 │    ├── User.cpp
 │
 ├── include/
 │    ├── Event.h
 │    ├── User.h
 │
 ├── data/
 │    ├── events.txt
 │
 └── README.md
```

---

## 🎯 Future Improvements

* Add GUI interface
* Online database integration
* Payment gateway simulation
* Multi-user authentication system

---

## 👨‍💻 Author

**Shreyash Srivastava**

---

## 🌟 Note

This project was developed as part of learning advanced C++ and OOP concepts and demonstrates practical implementation of real-world system design.
