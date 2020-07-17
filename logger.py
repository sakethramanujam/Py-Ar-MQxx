# !usr/bin/env python
from datetime import datetime as dt
import serial


if __name__ == "__main__":
    device = serial.Serial('/dev/ttyACM0',9600)
    with open('log.csv','w') as f:
        f.write("time,mq2,mq5,mq9,mq135\n")
        while True:
            t = dt.now()
            data = device.readline().decode().split(',')
            if len(data) == 4:
                f.write(f'{t},{data[0]},{data[1]},{data[2]},{data[3]}')
