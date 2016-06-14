
from __future__ import print_function
from threading import Thread
import six

class TestThread(Thread):
 
    def __init__(self):
        Thread.__init__(self)
        self.stop_requested = False
        self.data = 0
 
    def run(self):
        while not stop_requested:
            self.data += 1
            
 
if __name__ == "__main__":
    th = TestThread()
    th.start()
    six.moves.input()
    th.stop_requested = True
    print(th.data)
