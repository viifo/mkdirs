# mkdirs #

[中文](https://github.com/viifo/mkdirs/blob/master/README.md) | [English](https://github.com/viifo/mkdirs/blob/master/README_en.md)

一个多级目录创建工具。Windows下使用mkdir创建多级需要使用"\\"分割符，而Linux下创建多级目录使用的是"/"分割符。

有了mkdirs再也不用担心分割符问题啦！！！

## 构建 ##
构建前请确保已安装 gcc 且已添加到环境变量，构建后的可执行文件放置在build文件夹下。
```shell script
cd youpath/mkdirs/
make build
```

## 使用 ##
``` shell script
mkdirs path1 [path2]...

# 示例
mkdirs dir1/dir2/
# 或 
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

