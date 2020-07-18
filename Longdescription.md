# Middlebencher

The objective of the proposed system is to eradicate the conventional water management system and create a market place where any house can buy and sell water 
in their neighbourhood. Water sources like tankers and public sector water have impurities, come at irregular time intervals and tankers surge their prices based
on the demand and season. A marketplace within communities would create competition; regulations can help in eradicating this informal sector and create a fair
market with water of better quality and price. Machine learning algorithms are used to give the buyer and sellers the predicted value of how much water each household
uses on a daily or monthly basis to make it easier for the user for purchasing and selling of water.

## Product/Service Description
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/IBMMiddlebencher/blob/master/Nodered/screenshots/Picture11.png">
</p>
Development of IoT based water management system is designed, where the individual household can request water from another house in the same community. 
In this method, the houses with excess water can sell theirs to the houses that are in need. A main tank is present which acts as a medium of water flow on every transaction;
this avoids unnecessary congestion and allows smoother transition.<br>
Water level in the individual’s storage tank and main tank is monitored using an ultrasonic sensor . Based on the requested amount of water by the buyer, water 
is sent from the seller comparing the amount of water present in his storage and main tank. A mobile application contains a dashboard of all the information of potential
buyers and sellers. <br>
The Figure presents the schematic view of the implemented community and water management system.H1 to H20 represents the houses in the community, a water storage 
tank is used as a medium. The main water tank is used to reduce any disproportionate water transfer or congestion in the community. Pipeline of every house consists
of a flow sensor and a solenoid valve. IoT control room is a virtual hub where all the request and response actions are recorded, implemented and monitored .<br>
If any house holder in the community requests water (this can be done through the app) then request information is received at the controller. The community’s main water tank
acts as a water bank where potential sellers can store their water in case of storage limitations or autonomous transactions, the tank has an ultrasonic sensor which is used 
to sense the level of water present in it. If the requested amount of water (by the receiver) is present in the main tank, then the respective solenoid valve of the 
receiver’s house gets on and the motor or pump of main water tank pumps the water from the main tank to the respective house. The flow sensor present in receiver’s house will 
calculate the amount of water flowed to the house. If the requested amount becomes equal to the water flowed, then the pump of the main tank gets off and the solenoid valve 
of the receiver’s house gets off. Finally, the money will be credited to the seller who stored his water in the main tank. If the requested amount of water is not present 
in the main water tank, then the controller requests water from the entire houses present in the community in the formof message or notification through an application . If any 
household has an excess amount of water, then their water is sent to the main tank. This is done as follows; first the solenoid valve of the sender’s house and main
tank gets on. The pump of the respective house pumps water from house to the tank. The flow sensor calculates the amount of water flowing. If the requested amount reaches, then 
the motor of the respective house gets off and the solenoid valve also gets off. After the amount is received at the main tank it is sent to the house that requested water 
the main tank and the money is credited to the sender. The process takes place as the transactions mentioned above.<br>

## Conclusion

A precautionary system avoids or eliminates the issue of over pricing water by water tankers during water scarcity times which is being major problem in many big cities. It also 
acts as a platform for doing business with water at reasonable prices. The proposed system also encourages people for implementing rain water harvesting and sewage water treatment 
as then can sell the water that they refined or retreated. This results in increase in levels of ground water which is very much needed in the present world.

### Results
The system is thereby comprised of a water managing marketplace which assists users with their daily water usage and predicts their future expenditure and allows them to sell and buy water 
within their community.Research on a community with 20 houses was done and a report is generated with the cost incurred for purchasing water when they used the platform to buy excess or privately 
generated water using rain water harvesting or sewage water treatment within the community versus buying it traditionally from water tankers.The chart for plotting differences of various water sources 
and the proposed system in terms of price is as follows, <br>
<p align="center">
  <img src="https://github.com/DendukuriRaviKiran/IBMMiddlebencher/blob/master/Nodered/screenshots/screenshot-drive.google.com-2020.07.18-14_52_30.png">
</p>
Figure is the comparison of cost readings of water consumed in 20 houses with in the proposed system taken every month for a period of a year and compared it with another 20 houses where tankers 
and private players are their main water source. The graph shows the decrease in price of water when the proposed system is used.<br>
