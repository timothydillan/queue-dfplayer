# Queue DFPlayer

Ever wanted to queue and play music with your Arduino? Well, this simple Arduino library helps you do just that. You can add music to the queue, and play the queued music, just like how any music queuing service works. Scroll down to get started. 

For a bit of background information, this library uses the `queue` data structure available in the built-in `queue` C++ library. Feel free to contribute by making a pull request or report bugs/feature enhancements on the issues page.


## Installation

1. Download the library.
2. Extract.
3. Put the library at `Documents/Arduino/libraries`, or wherever your Arduino libraries folder is located.

Alternatively, instead of manually extracting and putting the library at the proper folder, you can:
1. Download the library.
2. Open the Arduino IDE.
3. Navigate to Sketch > Include Library > Add .ZIP Library.
4.  When prompted, select the .ZIP file of the library.

## Usage

Begin by including the library on your sketch, using:
`#include <QueueDFPlayer.h>`

then, proceed to, for the lack of a better term, make an instance of the library.

`QueueDFPlayer QMusic;`

Note: replace QMusic with any name.

Whenever you would like to add music to the queue, do:
`QMusic.addMusic(musicFile);`

Whenever you would like to get music from the queue, do:
`QMusic.getMusic();`

The `getMusic()` method will return an integer, referring to the music that was first queued. As an example, if you queued three songs, e.g., `queue = [1, 2, 3]`, the `getMusic()` method will return the first music that was queued, which in this case, is `1`, and then remove that from the queue. Therefore, the next time you call `getMusic()`, the method would return `2`, and so on.

## Example

Coming soon.