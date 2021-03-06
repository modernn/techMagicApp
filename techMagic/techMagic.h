#pragma once

#include"config.h"
#include"KinectHandler.h"
#include"ImageProcessor.h"
#include"httpService.h"
#include"Serial.h"

using namespace std;

#define ESC_KEY 27
#define SPACE_KEY 32
#define ALT_KEY 18

KinectHandler m_kinect;
ImageProcessor m_imageProcessor;
httpService hueLights;
httpService spotify;
Serial* serialPort = new Serial("COM8");
String windowName = "Wand Trace Window";

void musicToggle();
void blindsToggle();
void botToggle();
void lightsToggle();
void updateSimblee();