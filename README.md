# 2021_DSP_ML_Workshop
Training and Deploying ML models to STM32 Microcontrollers Workshop from the 2021 DSP/ML Workshop

This project holds the workshop materials from Jacob Beningo's ML workshop at the 2021 DSP/ML Conference. The recording for the workshop is available at https://www.dsponlineconference.com/ in the conference archive. 

The workshop abstract can be found below:

***************************************************************************************************

Machine learning (ML) has often been considered a technology that operates on high-end servers and doesn’t have a place in traditional embedded systems. That perception is quickly changing. This workshop will explore how embedded software engineers can get started with machine learning for microcontroller based systems.

This session balances theory with practical hands-on experience using an STM32 development board.

Attendees will learn:

- How to collect and classify data
- Methods available to embedded developers to train a model
- Hands-on experience training a model
- How to convert a model to run on an STM32 MCU
- How to run an inference on a microcontroller

***************************************************************************************************

This project contains the following materials:
- An example STM32CubeIDE project that uses X-Cube-AI version 7.0.0 and the STM32L475E-IOT01A1
- A  trained ML model that was trained using the SineWave example from TensorFlowLite for microcontrollers that can be found at:

https://github.com/tensorflow/tflite-micro/blob/main/tensorflow/lite/micro/examples/hello_world/create_sine_model.ipynb

- An Excel file with captured output data from running the model on the STM32. (Yes, there are far better ways to plot the data, but I did it the "old school" way).

I hope that this is found to be useful and any questions can be directed to info@beningo.com


Happy Coding,

Jacob Beningo