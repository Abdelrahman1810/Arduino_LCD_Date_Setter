# Arduino I2C LCD Date Setter

The Arduino I2C LCD Date Setter project is a simple project that uses an Arduino board with an I2C LCD display and four push buttons to set the date. The LCD display shows the current date and allows the user to modify the day, month, and year by using the push buttons.

## Prerequisites

To run this project, you will need:

  - An Arduino board
  - An I2C LCD display
  - Four push buttons
  - Jumper wires to connect the components

## Connection

1. Connect the I2C LCD display to the Arduino board using the following pin connections:

  - SDA pin to Arduino A4
  - SCL pin to Arduino A5
  - VCC pin to Arduino 5V
  - GND pin to Arduino GND

2.  Connect the four push buttons to the Arduino board as follows:

  - Button 1 (Move left) to Arduino digital pin 9
  - Button 2 (Move right) to Arduino digital pin 10
  - Button 3 (Decrease date) to Arduino digital pin 7
  - Button 4 (Increase date) to Arduino digital pin 8


## Libraries

This project uses the following libraries:
- <a href="https://github.com/johnrickman/LiquidCrystal_I2C">LiquidCrystal_12C</a> library by Frank de Brabander


## Usage

1. Press the left and right buttons to move the cursor to the desired date field (day, month, or year).
2. Press the up and down buttons to increase or decrease the selected date field.
3. Once you have set the desired date, press and hold the left button for a few seconds to save the date.
4. The LCD display will now show the new date.

## Customization

Contributions to this project are welcome! If you find any bugs or have suggestions for improvements, please open an issue or submit a pull request.

## Contact

If you have any questions or comments about this project, please feel free to contact me at 

<a href="http://wa.me/201061075354" target="_blank"><img alt="LinkedIn" src="https://img.shields.io/badge/whatsapp-128C7E.svg?style=for-the-badge&logo=whatsapp&logoColor=white" /></a> 

<a href="https://www.linkedin.com/in/abdelrahman-mohammed-814a9022a/" target="_blank"><img alt="LinkedIn" src="https://img.shields.io/badge/linkedin-0077b5.svg?style=for-the-badge&logo=linkedin&logoColor=white" /></a>

Gmail : abdelrahmansalby23@gmail.com 📫