# Middlebencher
IBM Call for Code Submission

## Contents

1. [Short description](#short-description)
1. [Description and Demo video](#description-and-demo-video)
1. [The Architecture](#the-architecture)
1. [Long description](#long-description)
1. [Project roadmap](#project-roadmap)
1. [Setup](#setup)
1. [Built with](#built-with)
1. [Authors](#authors)
1. [Acknowledgments](#acknowledgments)

## Short description

### What's the problem?

Water Scarcity is a dire problem in the world. India and many other countries are expected to run out of ground water by the year 2025 .Due to the advent of Global Warming the natural sources like rivers and lakes are drying up creating scenarios like the Cape town and Chennai Drought .Alternate renewable water sources like sewage treatment , rain water harvesting etc. have storage and capital limitations with have restricted them for mass adoption.

### The idea

The main objective of the project is to eradicate the conventional water management system and create a marketplace where any house can buy and sell water in their neighbourhood. By creating a fair market , small and medium water enterprises can acquire support via loans , venture capital and a customer base to sell.

### How can this technology help?

This technology Uberifies the current Water Industry filled with gaps in Supplychain and reliability. The Proposed Idea can help in the eradication of Irregular surge in water prices and help in creating a competitive and at the same time fair market where anyone can sell their product.This technology helps to create mass adoption of renewable water sources and maintanence of reliable service in the quality of water.

## Description and Demo video
Click The Icon Below <br>
[![Watch the video](https://github.com/DendukuriRaviKiran/IBMMiddlebencher/blob/master/Nodered/screenshots/picture.jpg)](https://youtu.be/HTrKSBfW3oc)

## The Architecture

![Video transcription/translation app](https://github.com/DendukuriRaviKiran/IBMMiddlebencher/blob/master/Nodered/screenshots/WhatsApp%20Image%202020-07-18%20at%2013.38.41.jpeg)

1. The User navigates to the application and performs a water transaction.
2. Node red is used to process the transaction via MQTT and provides information to the respective hardware components.
3. The microcontroller of the respective harware component performs the desired activity using its sensors an actuators and sends confirmation.
4. The app stores the confirmationn text as a document within Object Storage.

## Long Description

See [Longdescription.md](Longdescription.md)

## Roadmap
See [ROADMAP.md](ROADMAP.md)

## Setup

See [setup.md](setup.md)

## Built with

* [IBM IoT Platform](https://www.ibm.com/internet-of-things/solutions/iot-platform/watson-iot-platform) - Used to collect and capture data from the sensor and actuator
* [Node-RED](https://nodered.org/) - Used to run a custom machine learning algorithm on the collected data
* [IBM Cloud Kubernetes Service](https://www.ibm.com/cloud/container-service/) - Used to connect the data to the dashboard

## Authors

* Dendukuri Ravi Kiran
* Korivi Adi Siva Prasad Reddy
* Aki Rohith
* Varun Alla
* CHOKKARAPU ANUDEEP

## Acknowledgments
* Vaishnavi Rudraraju for her voiceover in the Demo Video.
