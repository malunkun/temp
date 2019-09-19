README
------

**客户端**

1.读取file，获取温度
2.TLV处理成字节流
3.socket发送
4.deamon守护进程，后台运行

**服务器**

1.deamon守护进程
2.epoll+多线程框架，多并发处理
3.socket加入到框架中，接收客户端TLV字节流
4.TLV解析，获取到字符串信息
5.sqlite3数据库存入数据
