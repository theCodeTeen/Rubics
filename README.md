# Rubics

Rubics is an graphical C program which can help you to solve a 3x3 rubics cube!

## Usage

Run Rubics.c file in your C environment 

``
#WARNING: Make sure your C environment is capable of running <graphics.h> library
``

## Splash screen of application

![Screenshot (206)](https://user-images.githubusercontent.com/61378660/144090682-87bfb39b-7724-4432-89d4-154304a42b3f.png)

## Entering your cube state

After splash screen this frame will appear
![Screenshot (209)](https://user-images.githubusercontent.com/61378660/144091165-8a25ecb2-0552-4962-a8bd-6e6ace4fa0a6.png)

Following frame asks the input of the side which has red as center peice 

### Number value for inputs

| Number             | Color                                                                |
| ----------------- | ------------------------------------------------------------------ |
| 1 | ![#ff0000](https://via.placeholder.com/10/ff0000?text=+)  Red|
| 2 | ![#ffffff](https://via.placeholder.com/10/ffffff?text=+) White |
| 3 | ![#ffa500](https://via.placeholder.com/10/ffa500?text=+) Orange |
| 4 | ![#ffff00](https://via.placeholder.com/10/ffff00?text=+) Yellow |
| 5 | ![#0000ff](https://via.placeholder.com/10/0000ff?text=+) Blue |
| 6 | ![#00ff00](https://via.placeholder.com/10/00ff00?text=+) Green |
| 7 |  Backspace |

Enter the input color peice by peice starting from top left peice going down to bottom right one.

Made mistake? No worries, press 7 to erase the last input

After you enter all 9 colors of the side with red central peice, other 5 side will appear for input.

```
#NOTE: Keep green centered side facing upwards while entering color values of sides with red, white, orange, yellow central peices and keep red centered side facing upwards while entering color values of sides with blue and green central peicies facing upwards.
```

## Now all you have to do is apply the instructions on your cube

![Screenshot (216)](https://user-images.githubusercontent.com/61378660/144094886-5546afb1-db49-40c5-a90a-1232d17d8424.png)

Convention of instruction is [SIDE][DIRECTION]

In above snapshot instruction [BOTTOM][LEFT] indicates hold the cube as shown and move the BOTTOM area in LEFT direction as the arrow indicates!

Press ANY KEY to see the next step!

```
# After the cube is solved execution will end automatically
```

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
[MIT](https://choosealicense.com/licenses/mit/)

