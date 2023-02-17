# justJS - Creating your own JavaScript runtime tutorial
![just logo](./just.jpeg)

## Overview
justJS is a JavaScript runtime built on top of [V8 Javascript Engine](https://github.com/v8/v8) and [Libuv](https://github.com/libuv/libuv) 

- Use the environment to follow the tutorial on a [Gitpod snapshot](https://habibovulugbek-justjs-8090lnl8ki7.ws-us87.gitpod.io/)

## About
Welcome, this repo is  about Recreating the Node.js project from Scratch using V8, Libuv and C++

First of all, leave your star 🌟 on this repo.


## Running

- In the GitPod env you can run the hello world example by running the executable [./start.sh](./just/start.sh) script. 

### Notes

- It comes with `live reload` enabled for `C++` and `JS` files using `nodemon`
- It comes with a simple `Print` function, a custom C++ function used as a `console.log` function
- The [./start.sh](./just/start.sh) script generates a `binary` called `just`. 
    - It works similarly to how `Node.js` works. 
        - By running `just index.js` it will read the `JavaScript` content from the file and use `V8` to interpret it nd `libuv` to wait for async events.

- Project uses `V8 v10.7.0`
- Project uses `Libuv v1.x`

- All other dependencies are listed on [scripts](./scripts) folder.

## Examples

I left some file exmaples on [examples](./examples/) folder in case you wanna check out how to create [uv timers](./examples/uv-timers.cpp), [uv threads](./examples/uv-threads.cpp), [native cpp threads](./examples/cpp-native-threads.cpp) or the [v8 custom print function](./examples/v8-print-hello.cpp).

### Running the examples
- You can compile and execute examples by simply executing 
```sh
make example-without-extension
```
For example executing the [v8-print-hello.cpp](./examples/v8-print-hello.cpp):
```sh
make v8-print-hello
# Hello, World!...
```
## Compiling binaries for other platforms

if you wanna compile binaries it by yourself, I left some scripts in case you wanna compile all binaries by yourself

- [Installing libuv](./scripts/libuv-env-script-x86.sh)
- [Installing v8](./scripts/v8-env-script-x86.sh)

## Author

- [Habibov Ulugbek](https://github.com/HabibovUlugbek)