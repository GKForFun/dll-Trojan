#coding: utf-8

import socket

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM, 0)
s.bind(23333)