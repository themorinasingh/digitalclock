# Time and Date Display Program

This repository contains a simple C program that continuously displays the current time and date. Users can choose between a 24-hour and a 12-hour time format, and the display updates every second.

## Features

- **Current Date:** Displays the full date in a readable format.
- **Current Time:** Offers a choice between 24-hour and 12-hour (with AM/PM) time formats.
- **Live Update:** Clears the terminal and updates the time and date every second.

## Prerequisites

- **Operating System:** Unix-based systems (Linux, macOS) or any environment that supports ANSI escape sequences.
- **Compiler:** GCC or any compatible C compiler.

## Getting Started

### Compilation

1. **Clone the Repository:**

   ```bash
   git clone https://github.com/yourusername/time-date-display.git
   cd time-date-display
   ```

2. **Compile the Code:**

   Run the following command in your terminal:

   ```bash
   gcc -o time_display time_display.c
   ```

### Execution

1. **Run the Program:**

   Execute the compiled binary:

   ```bash
   ./time_display
   ```

2. **Select Time Format:**

   When prompted, choose one of the following options:
   
   - Enter `1` for the 24-hour format.
   - Enter `2` for the 12-hour format.

The program will then clear the terminal screen and continuously display the current time and date, updating every second.

## Code Overview

- **`main()` Function:**
  - Prompts the user to select the time format.
  - Continuously updates the display by clearing the screen and printing the current time and date.
  - Uses the `sleep(1)` function to update every second.

- **`get_date()` Function:**
  - Retrieves and formats the current date as `Day Month Date Year`.

- **`get_time_12()` Function:**
  - Retrieves and formats the current time in 12-hour format, including AM/PM.

- **`get_time_24()` Function:**
  - Retrieves and formats the current time in 24-hour format.

The use of ANSI escape sequences (e.g., `\e[1;1H\e[2J`) clears the terminal screen before updating the display, ensuring that only the latest time and date are visible.

## Contributing

Contributions are welcome! If you have suggestions or improvements, please follow these steps:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Commit your changes.
4. Open a pull request with a detailed description of your changes.

## License

This project is licensed under the [MIT License](LICENSE).

## Acknowledgments

- This project demonstrates basic time and date functionalities in C and can be a good starting point for beginners learning about C programming and system time functions.

Enjoy using the Time and Date Display Program!
