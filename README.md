# Vapeboy

[Gameboy Original](https://en.wikipedia.org/wiki/Game_Boy) platformer game

## Run

Open game.gb in Gameboy emulator ([Bgb](http://bgb.bircd.org/) is recommended)

## Building from source

### Prerequisites:
- `gbdk` (available [here](http://gbdk.sourceforge.net/), for OS X i use [this](http://www.rpgmaker.it/proflame/gbdk.zip) version)
- GNU Make

To build:
```
make CC=/path/to/lcc
```
Where `path/to/lcc` is path to lcc tool from GBDK
