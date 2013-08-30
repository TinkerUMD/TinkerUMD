TinkerUMD Styling Guide
====

* File names and folders should be lower case with underscores.  Ex. analog_read/analog_read.ino
* Class names should be upper camelcase
  
  ```cpp
  class AnalogReader{
    //some code
  };
  ```
* Variable names should be lower case with underscores
  ```cpp
    int analog_reading_volts;
  ```
* Constant variables have mixed case prefixed by a lowercase k
  ```cpp
    int kAnalogThreshold
  ```
* Each indent should be 2 spaces (not a tab).
* Header files should contain a define statement PROJECT_PATH_FILE_NAME_H_
  
  ```cpp
  #ifndef TINKERUMD_DEMOS_ANALOG_READ_
  #define TINKERUMD_DEMOS_ANALOG_READ_

    //some code
    
  #endif
  ```
