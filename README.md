# velocity.inc

This package simply provides one function: `GetPlayerTotalVelocity` which returns the players velocity in kilometres per hour.

The exact formula for this has quite a lot of history and debate centered around it in the SA:MP community. There is a discussion on the topic [here](http://forum.sa-mp.com/showthread.php?t=364124).

Despite the many different methods people have come up with over the years, this library currently just employs a very simple multiplier of the vector of the player's velocity.

## Testing

To boot up a test server, simply use sampctl:

```bash
sampctl package ensure
sampctl package build
sampctl package run
```

And connect to `localhost:7777`.
