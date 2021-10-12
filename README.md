# Arduino-Basic-Midi-USB-DIN5-interface
Basic Midi interface using AltsoftSerial


this is a basic usage case for the altsoftserail library that allows you to have an alternative serial port for using, in this case, the arduino uno serial port 0, 1 pins
that shares the communication with the usb port along with the 8, 9 pins to create a second serial port.

im leaving this simple as this is the way i need it to work for my project. it will receive Midi info from the midiserial port pin 8 and copies it to the serial port where im sending it through the usb connection to my software and processing it. then i am sending midi infomation back to the serial port from my midi software through usb connection and copying it to the midiserial output on pin 9. 

theres a lot of different usage cases for this code, ive used it for example on having two diferent midi in/out combos, also as midi through plus usb midi....it depends most on what you need. just keep in mind you now have 2 serial ports on your uno. so I hope its usefull for you and have fun with midi!


// This Code was wrtten By DSGN Loopz, use it, modify it, distribute it and enjoy it as you need
// consider leaving this statement here as a credit to the author
// @dsgnloopz  ------  @desgeneradotv follow me if this was helpfull for you. that will be really helpfull for supporting my work
// and keep yourself updated with my projects
