# mkdirs #

[中文](https://github.com/viifo/mkdirs/blob/master/README.md) | [English](https://github.com/viifo/mkdirs/blob/master/README_en.md)

A multi-level directory creation tool. Using mkdir to create multi-level directories under Windows requires the use of the "\\" separator, while creating multi-level directories under Linux uses the "/" separator.

With mkdirs, there is no need to worry about the separator problem anymore! ! !

## Build ##
Before building, make sure that gcc is installed and added to the environment variable, and the executable file after the build is placed in the build folder.
```shell script
cd youpath/mkdirs/
make build
```

## Usage ##
``` shell script
mkdirs path1 [path2]...

# example
mkdirs dir1/dir2/
# or 
mkdirs dir1/dir2/ dir5/dir6/
```

## License

```
Copyright 2021 viifo

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

   http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
```

