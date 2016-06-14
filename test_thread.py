from __future__ import print_function  # python2と3の互換のため
from threading import Thread  # threadingモジュールからThreadクラスを読み込み
import six  # これもpython2と3の互換のため


class TestThread(Thread):
    def __init__(self):
        Thread.__init__(self)
        self.stop_requested = False
        self.data = 0

    def run(self):
        # この変数がFalseのときdataをインクリメントします。
        while not stop_requested:
            self.data += 1

if __name__ == "__main__":  # <- __name__ == "__main__"を知らない場合は調べてね
    th = TestThread()
    th.start()  # この関数がrunメソッドを呼び出します。
    six.moves.input()  # python2の場合はrow_input関数になり、3の場合はinput関数になります。
    th.stop_requested = True  # この変数をTrueにすることによってインクリメントを止めます。
    print(th.data)  # dataを表示
