#import time and print current device time...
import time
timestamp = time.strftime('%H:%M:%S')     # time.strftime('%H:%M:%S')  is used to print time 
#here %H is hour, %M is minute, %S is second
print(timestamp)
hour = time.strftime('%H')
print(hour)
minute = time.strftime('%M')
print(minute)
sec = time.strftime('%S')
print(sec)
# https://docs.python.org/3/library/time.html#time.strftime

# day 26 is its exercise