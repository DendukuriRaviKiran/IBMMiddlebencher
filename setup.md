# Setup

## Pre-requisites

This project, at least the hardware portion, has been developed with Arduino, so you will need the IDE if you want to use our example, you can get it here (https://www.arduino.cc/en/main/software).

Once the Arudino IDE is installed, you should install third party libraries for the ESP32 board (the specific one that we use).

In order to do that, you should add this repository as follows. Go to preferences, then add on the field “Additional Boards Manager URLs” this URL `https://dl.espressif.com/dl/package_esp32_index.json`, if you already have some other repositories, separate them with a comma.

Next thing to do is add our board to the IDE. We need to click on Tools Menu, then on Board section, click on “Boards Manager”. We will search `esp32` and install the board called “esp32 by Espressif Systems” (at the moment of writing this manual, the selected version is 1.0.4).

The last thing before getting to the real work is install the libraries used by our project. These include code for the temperature sensor and for forming a JSON document in order to send the data to the IBM Watson IoT Cloud.

We go to Sketch menu, then we will select “Include library” and finally “Manage Libraries”, then we will search and install the following libraries

- ArduinoJson by Benoit Blanchon 5.13.5 (IMPORTANT!, the code need this specific version, as the upper version change the way it acces the information, from array to pointer, and will not compile if you don’t use this specific version)
- Flow sensor library by Adafruit 1.3.4
- EspMQTTClient by Patrick Lapointe 1.5.0

Once all these pre-requisites are met, you can start compiling the code.

## Sensors and Actuators

For this part of the project, we used a board based on the ESP32 micro-controller with NodeMCU firmware, as this project will be open source. 
### Sensor Details

#### Ultrasonic sensor
Ultrasonic Sensors measure the distance to the target by measuring the time between the emission and reception. When mounted vertically on the water tanks, the sensor provides data on the amount of water level present in the tank, which can be used to find the daily water usage of an individual house or in a household.The sensor provides data 
of the amount of water used by a selected household in a day by obtaining the difference between the initial reading of the sensor at the day and the final reading at night.

#### Water Flow sensor
The Flow sensor works on hall-effect which outputs the corresponding pulse signal. The sensor provides data on how much water a seller sends, and a buyer receives .

### Actuator Details

#### Water pump motor
A water pump is a mechanical device that changes the energy flow from electrical to mechanical. The actuator is used to pump the water from the sender to the receiver .

#### Solenoid valve
Solenoid valve is a control unit which, when electrically energized or de-energized, either shut off or allow fluid flow. The actuator is used to guide the water flow in the right direction to the receiver.

## IBM IoT Platform

This is a very straight forward step, simply register the new devices and make sure they connect to the platform, also and thanks to the code uploaded to our microcontroller we're able to perform remote actions on our device, such as change the polling interval, restart the device, or wipe it.

At last but not at least we create a connection between the IoT Platform and our next step, our Node-RED app.

## Node-Red

The Following is the Node red Setup and demo for the Proposed Idea and the code is used in the IBM Cloud Platform <br>
### Step 1: Cloud Credentials<br>
	Node red link - https://bit.ly/middlebencherdeloitte  (Open the link in browser)
	Node red login – mid (Enter into node red flow editor and enter login and password)
	Node red password - Griet123 
	IBM Cloud login – ravikiranrocks3690@gmail.com  (IBM cloud credentials) 
	IBM Cloud password – Griet123 

### Step 2: Open Dashboard 
  Click on Dashboard Icon   
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/ibmteamthirdeye/blob/master/code/screenshots/dashboard-0.png">
</p>

### Step 3: Open Home page of Dashboard
<br>
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/ibmteamthirdeye/blob/master/code/screenshots/home-1.png">
</p>

### Step 4: Selection of Receiver <br>
        Select the House in which the desired water should go to. <br>
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/ibmteamthirdeye/blob/master/code/screenshots/senderandquantity-3.png">
</p>

### Step 5: Selection of Sender and Quantity <br>
        Select the House in which the desired water should come from and the desired quantity of water.<br>
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/ibmteamthirdeye/blob/master/code/screenshots/User-2.png">
</p>

### Step 6:  Confirmation <br>
	  Confirm your Transaction.<br>
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/ibmteamthirdeye/blob/master/code/screenshots/confirmation-4.png">
</p>

### Step 7:  User Interface <br>
	 The received data from the Dashboard is sent to their 	respective MQTT servers<br>
	 The link code for the following :https://github.com/DendukuriRaviKiran/IBMMiddlebencher/tree/master/Nodered/user_interface<br>
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/ibmteamthirdeye/blob/master/code/screenshots/userinterface-5.png">
</p>

### Step 8: Cloud <br>
	The Received data into the cloud is used to segregate the data 	channel the information into their respective cloud input streams.<br>
	The link code for the following :https://github.com/DendukuriRaviKiran/IBMMiddlebencher/tree/master/Nodered/cloud<br>
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/ibmteamthirdeye/blob/master/code/screenshots/cloud-6.png">
</p>

### Step 9:  Sender Hub
	Here the information of the desired Sender is used to send the 	quantity of water it needs to release using a switch. The Hardware of Sender Home after completion 	 	 of task sends a confirmation which is then passed to main tank cloud.<br>
	The link code for the following :https://github.com/DendukuriRaviKiran/IBMMiddlebencher/tree/master/Nodered/sender<br>
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/ibmteamthirdeye/blob/master/code/screenshots/senderhub-7.png">
</p>

### Step 10: Main tank <br>
	 Main tank after receiving confirmation from Sender hub, uses 	 the data of quantity requested to perform the task from the hardware. The hardware pushes the 		 	  received water onto the receiver and sends confirmation to the receiver hub MQTT.<br>
	 The link code for the following :https://github.com/DendukuriRaviKiran/IBMMiddlebencher/tree/master/Nodered/maintank<br>
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/ibmteamthirdeye/blob/master/code/screenshots/maintank-8.png">
</p>

### Step 11: Receiver Hub <br>
	 Here the information of the desired Receiver is used to send the quantity of water it needs to receive using a switch. The Hardware of Receiver Home after completion of 	   task sends a confirmation which is then passed to Main Cloud.<br>
	 The link code for the following :https://github.com/DendukuriRaviKiran/IBMMiddlebencher/tree/master/Nodered/reciever<br>
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/ibmteamthirdeye/blob/master/code/screenshots/reciever-9.png">
</p>

### Step 12: User Infographics <br>
	 The data of all the transactions performed by the houses are displayed as line charts in the Dashboard “each house water intake" tab.<br>
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/ibmteamthirdeye/blob/master/code/screenshots/chart-10.png">
</p>

### Step 13 : Hardware Description<br>
		  Each house and the main tank contains a motor and flow sensor for regulating the amount and flow of water.<br>
		  Solenoid valves in the respective house act as a switch and with the help of external pipelines an architecture for the water flow is created.<br>
		  Similar hardware is used  in each house and main tank and a inter connection of pipelines is formed.<br>
	  The link code for the following :https://github.com/DendukuriRaviKiran/IBMMiddlebencher/tree/master/FirmwareMain<br>	  
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/ibmteamthirdeye/blob/master/code/screenshots/Picture10.png">
</p>

## IBM Cloud Kubernetes Service

At this point, we need somewhere to publish our real-time dashboard. We created a service at the IBM Cloud Container Service. This service includes a websockets receiver and sender and a NGINX hosting our portal written basically with Javascript and using datatables library based on jQuery.

This service has exposed two ports, one for the websockets server and the other for the NGINX server.

[Inside this folder](/dashboard/server), you can find the code of the websockets server `server.js`, the source for the portal `html/index.html` and also the script we use to deploy and update the code on our pod `deploy.sh`.

## Watson Machine Learning

Prometeo solution uses machine learning in order to determine the level of risk to keep the firefighter in the area putting out the fire or if it is imperative to move him away.

We didn't have real data for training the model, so we decided to emulate data creating an ad hoc dataset.

First, we used the dataset to train the model.

After training the model, we created a web service in order to use the model in the Node/Red module explained above.
