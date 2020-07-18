# IBMteamMiddlebencher

Submission for IBM Call for code 2020 <br>
<br>
The Following is the Node red Setup and demo for the Proposed Idea and the code is used in the IBM Cloud Platform <br>
Step 1: Cloud Credentials<br>
	Node red link - https://bit.ly/middlebencherdeloitte  (Open the link in browser)<br>
	Node red login – mid (Enter into node red flow editor and enter login and password)<br>
	Node red password - Griet123 <br>
	IBM Cloud login – ravikiranrocks3690@gmail.com  (IBM cloud credentials) <br>
	IBM Cloud password – Griet123 

Step 2: Open Dashboard 
  Click on Dashboard Icon   
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/ibmteamthirdeye/blob/master/code/screenshots/dashboard-0.png">
</p>
STEP 3: Open Home page of Dashboard
<br>
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/ibmteamthirdeye/blob/master/code/screenshots/home-1.png">
</p>
STEP 4: Selection of Receiver <br>
        Select the House in which the desired water should go to. <br>
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/ibmteamthirdeye/blob/master/code/screenshots/senderandquantity-3.png">
</p>	
Step 5: Selection of Sender and Quantity <br>
        Select the House in which the desired water should come from and the desired quantity of water.<br>
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/ibmteamthirdeye/blob/master/code/screenshots/User-2.png">
</p>
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/ibmteamthirdeye/blob/master/code/screenshots/confirmation-4.png">
</p>
Step 7:  User Interface <br>
	 The received data from the Dashboard is sent to their 	respective MQTT servers<br>
	 The link code for the following :https://github.com/DendukuriRaviKiran/ibmteamthirdeye/tree/master/code/user_interface<br>
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/ibmteamthirdeye/blob/master/code/screenshots/userinterface-5.png">
</p>
Step 8: Cloud <br>
	The Received data into the cloud is used to segregate the data 	channel the information into their respective cloud input streams.<br>
	The link code for the following :https://github.com/DendukuriRaviKiran/ibmteamthirdeye/tree/master/code/cloud<br>
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/ibmteamthirdeye/blob/master/code/screenshots/cloud-6.png">
</p>
Step 9:  Sender Hub
	Here the information of the desired Sender is used to send the 	quantity of water it needs to release using a switch. The Hardware of Sender Home after completion 	 	 of task sends a confirmation which is then passed to main tank cloud.<br>
	The link code for the following :https://github.com/DendukuriRaviKiran/ibmteamthirdeye/tree/master/code/sender<br>
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/ibmteamthirdeye/blob/master/code/screenshots/senderhub-7.png">
</p>
Step 10: Main tank <br>
	 Main tank after receiving confirmation from Sender hub, uses 	 the data of quantity requested to perform the task from the hardware. The hardware pushes the 		 	  received water onto the receiver and sends confirmation to the receiver hub MQTT.<br>
	 The link code for the following :https://github.com/DendukuriRaviKiran/ibmteamthirdeye/tree/master/code/maintank<br>
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/ibmteamthirdeye/blob/master/code/screenshots/maintank-8.png">
</p>
Step 11: Receiver Hub <br>
	 Here the information of the desired Receiver is used to send the quantity of water it needs to receive using a switch. The Hardware of Receiver Home after completion of 	   task sends a confirmation which is then passed to Main Cloud.<br>
	 The link code for the following :https://github.com/DendukuriRaviKiran/ibmteamthirdeye/tree/master/code/reciever<br>
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/ibmteamthirdeye/blob/master/code/screenshots/maintank-8.png">
</p>
Step 12: User Infographics <br>
	 The data of all the transactions performed by the houses are displayed as line charts in the Dashboard “each house water intake" tab.<br>
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/ibmteamthirdeye/blob/master/code/screenshots/chart-10.png">
</p>
Additional Step : Hardware Description<br>
		  Each house and the main tank contains a motor and flow sensor for regulating the amount and flow of water.<br>
		  Solenoid valves in the respective house act as a switch and with the help of external pipelines an architecture for the water flow is created.<br>
		  Similar hardware is used  in each house and main tank and a inter connection of pipelines is formed.<br>
		  
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/ibmteamthirdeye/blob/master/code/screenshots/Picture10.png">
</p>
