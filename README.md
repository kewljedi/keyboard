# keyboard

The purpose of this project is to make they keyboard that I want to use. It isn't a full keyboard instead it is a programable set of hot keys. 

Now of course the fact that I want these hot keys to be able to control things like tmux, vscode, and the like, doesn't make this keyboard nearly geeky enough, so it needs rgb leds, underglow, and a host of other cool things that the [Quantum Mechanical Keyboard Firmware](http://qmk.fm) affords those that use it.

This is a learning experience, the idea is to learn about electronics pcb design, and refresh my electronics knowledge. As a learning aid I started with [ruiqimao's keyboard pcb guide](https://github.com/ruiqimao/keyboard-pcb-guide).

## SIGHT

### underglow
To be able to pull of the awesome underglow effect we will be using the WS2812 RGB Addressable LED. I picked this because it is the same as the LEDs that are supported by the RBG Matrix. 

Parts
* [WS2812](https://www.sparkfun.com/products/16346)


### rgb matrix 
Of course each key needs an RGB Led of it's own. To accomplish this WS2812 comes to the rescue.

Parts
* [WS2812](https://www.sparkfun.com/products/16346)

### rotary encoders
A little bit of spin can go along way, if it is just to change the volume, or scrub through audio or video every good purpose built keyboard should have one rotary encoder at least, this keyboard will have RGB enabled ones. To do this the RGB Led inside the rotary encoder will be connected to a WS2811 Chip that will make the LED in the rotary encoder exactly like the NeoPixels used for the rest of the lighting. Don't forget the rotary encoder also contains a button.

Parts
* [Rotary Encoder](https://www.sparkfun.com/products/15141)
* [Clear Knob](https://www.sparkfun.com/products/10597)
* [LED Driver Chip WS2811](https://www.adafruit.com/product/1378)


## HEARING

### keys
Cherry MX... (haven't picked a color yet)

## FEELING

### keys
Cherry MX ... (still no color choice)

### keycaps 
I haven't decided but, I was thinking.

Parts 
* [Clear Keycaps](https://www.sparkfun.com/products/15306)


### haptic feedback
Now the feedback of the keys alone just wont cut it for this keyboard, it must be able to let us know when we have enters certain modes or functions.

Parts
* [DRV2605L](https://www.ti.com/product/DRV2605L?HQS=TI-null-null-digikeymode-df-pf-null-wwe&DCM=yes&distId=10)
* [Linear resonant actuators](https://www.digikey.com/product-detail/en/jinlong-machinery-electronics-inc/G0832013D/1670-1078-ND/9974290)

### case
So why stop learning wth just electronics and learning about the firmware? I think building the case will be just as much fun. I am thinking maybe wood, and epoxy resin (clear). One thing I want to keep in mind for the design of the case is wrist support.

### wires
No tug. Hopefully the only time you need to attach a USB-C cable to the keyboard is to charge it (though it should work wth one connected to you computer). This means that we have to have Bluetooth and Batteries.

Parts
* [Battery](https://www.sparkfun.com/products/12895)
* [Battery Holder](https://www.sparkfun.com/products/14963)
* [Battery Management]()
* [Bluetooth Module](https://www.adafruit.com/product/2633)

Insanity Parts
* [Wireless Power Receiver](https://www.sparkfun.com/products/15934)
* [Wireless Power Transmitter](https://www.sparkfun.com/products/15935)

## TASTE
By this point lets all agree ths keyboard sounds awesome enough to lick... 