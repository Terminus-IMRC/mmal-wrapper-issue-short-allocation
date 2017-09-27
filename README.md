# mmal-wrapper-issue-short-allocation

This program reproduces a bug that is because of a short allocation in the
`mmal_wrapper` code.


## How to build and run

```
$ make
$ ./main
```


## Run result

Before fix:

```
$ ./main
*** Error in `./main': corrupted size vs. prev_size: 0x01c18a58 ***
Aborted
```

After fix:

```
$ ./main
Successfully done!
```
