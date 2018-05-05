# Lurk_Trojan

基于http协议的木马。

## FEATURE

- 功能代码模块化
- 内存加载功能代码，无实体文件残留

## AV bypass List

欢迎反馈并更新测试结果

- [x] KasperSky
- [x] 火绒
- [x] Windows Defender

## Getting Start

### Installation

Visual Studio 2017编译环境。

### Usage

提供Visual Studio 2017工程文件，使用时修改`cinfig.h`的Server ip，重新编译即可。

`start-up.exe`是我的启动文件，可以重写，或者`loadlibrary shellocde-dll.dll`即可。

#### Command List

- `00` 退出
- `01` reverse shell
- `02` 下载Url文件
- `03` 下载并执行Url文件
- `04` 系统基本信息扫描
- `05` 文件浏览
- `06` 功能模块传输并加载执行

## Task List

- [] 增加启动便捷修改Server ip的脚本，去IDE编译依赖
- [] Web Server端开发

## Development

### shellocde-dll

主逻辑代码

### reverse_tcp

反向shell

### reverse_http

反响http连接，暂未使用本模块

### myloadlibrary

内存加载模块

### fileExplorer

文件浏览

## encryptor

加密解密相关模块

## downloader

下载者

## baseInfoScan

基本信息扫描

## Report

如果你有任何关于Bug或功能的想法，欢迎与我联系。`reesummer@protonmail.com`

## Changelog

- V-0.1 0.1版本发布