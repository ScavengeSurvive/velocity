# velocity.inc

This package simply provides one function: `GetPlayerTotalVelocity` which returns the players velocity in kilometres per hour.

The exact formula for this has quite a lot of history and debate centered around it in the SA:MP community. There is a discussion on the topic [here](http://forum.sa-mp.com/showthread.php?t=364124).

Despite the many different methods people have come up with over the years, this library currently just employs a very simple multiplier of the vector of the player's velocity.

## Installation

Simply install to your project:

```bash
sampctl package install ScavengeSurvive/velocity
```

Include in your code and begin using the library:

```pawn
#include <velocity>
```

## Testing

To test, simply run the package:

```bash
sampctl package run
```

And connect to `localhost:7777`.
