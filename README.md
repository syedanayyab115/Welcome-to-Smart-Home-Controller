# 🏠 Smart Home Controller Simulation

A lightweight console-based application written in C++ that simulates a central hub for managing smart home devices. This project serves as a practical demonstration of **polymorphism (compile-time function overloading)** by executing unique device operations using a unified function call strategy.

---

## 🚀 Features

* **Smart Lighting Automation:** Toggle system status and fine-tune brightness intensity settings dynamically.
* **Climate Control Engine:** Manage status operations and precisely configure ambient AC temperature thresholds.
* **Passkey-Protected Smart Door Lock:** * Secures the system state change using an access pin logic.
  * Allows interactive, secure modifications to change the primary master security code directly from the terminal console.
* **Central Diagnostics Console:** Real-time state readouts tracking all active configurations simultaneously.

---

## 🛠️ C++ Concepts Explored

### Function Overloading 🔄
The core architecture heavily highlights compile-time polymorphism. The central module uses 5 distinct variations of the signature `controlDevice()` uniquely invoked based on the type and positional order of arguments provided:

| Function Signature | Target Task | Trigger Context |
| :--- | :--- | :--- |
| `void controlDevice(string message)` | Terminal logging | Internal status notifications |
| `void controlDevice(string, int, bool)` | Light Configuration | Updates state + brightness percentage |
| `void controlDevice(string, double, bool)` | Climate Control | Updates status + Target temperature |
| `void controlDevice(bool change)` | Pin Master Reset | Nested routine handling validation |
| `void controlDevice(string, bool, int)` | Security Mechanism | Standard system toggle requiring verification |

---

## 📖 System Walkthrough

1. **Main Deck Menu:** Navigate utilizing the central terminal numbers (0-4).
2. **Device State Setup:** Assign targeted states, intensity changes, or temperatures dynamically.
3. **Passkey Verification:** Input changes regarding security items require structural code authorization (Default Master Code: `1234`).
4. **Master Status Monitor:** Fetch an organized structural health report printing out diagnostic stats across every appliance interface module instantly.

---

## 💻 How to Run Locally

### Prerequisites
Ensure you have an active C++ environment compiler engine configured globally on your local workstation environment (such as `g++` on MinGW/GCC, Clang, or Visual Studio MSVC tools).

### Step-by-Step Execution
1. Open up your local terminal prompt workspace and pull down the project repository:
   ```bash
   git clone [https://github.com/syedanayyab115/Hopital-Managment-System-.git](https://github.com/syedanayyab115/Hopital-Managment-System-.git)
